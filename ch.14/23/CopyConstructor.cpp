//: C14:CopyConstructor.cpp
// Правильная разработка копирующего конструктора
#include <iostream>
using namespace std;

class Parent {
  int i;
public:
  Parent(int ii) : i(ii) {
    cout << "Parent(int ii)\n";
  }
  Parent(const Parent& b) : i(b.i) {
    cout << "Parent(const Parent&)\n";
  }
  Parent() : i(0) { cout << "Parent()\n"; }
  friend ostream&
    operator<<(ostream& os, const Parent& b) {
    return os << "Parent: " << b.i << endl;
  }
};

class Member {
  int i;
public:
  Member(int ii) : i(ii) {
    cout << "Member(int ii)\n";
  }
  Member(const Member& m) : i(m.i) {
    cout << "Member(const Member&)\n";
  }
  friend ostream&
    operator<<(ostream& os, const Member& m) {
    return os << "Member: " << m.i << endl;
  }
  friend istream& operator>>(istream &is, Member &m)
  {
    is >> m.i;
    return is;
  }
};

class Child : public Parent {
  int i;
  Member m;
public:
  Child(int ii) : Parent(ii), i(ii), m(ii) {
    cout << "Child(int ii)\n";
  }
  friend ostream&
    operator<<(ostream& os, const Child& c){
    return os << (Parent&)c << c.m
              << "Child: " << c.i << endl;
  }
};

class GrandChild : public Child
{
  Member m;
public:
  GrandChild() : Child(47), m(47) { cout << "GrandChild()...\n"; }
  GrandChild(const GrandChild &right) : Child(right), m(right.m) { cout << "GrandChild(const GrandChild&)\n"; }
  GrandChild& operator=(const GrandChild &right)
  {
    Child::operator=(right);
    m = right.m;
    cout << "GrandChild::operator=(const GrandChild&)\n";
  }
  friend ostream& operator<<(ostream &os, const GrandChild &gc)
  {
    return os << "GrandChild::m" << gc.m << endl;
  }
  friend istream& operator>>(istream &is, GrandChild &gc)
  {
    is >> gc.m;
    return is;
  }
};

int main() {
  Child c(2);
  cout << "calling copy-constructor: " << endl;
  Child c2 = c; // Вызывает копирующий конструктор
  cout << "values in c2:\n" << c2;

  cout << "=============================\n";

  GrandChild gc1;
  GrandChild gc2(gc1);
  GrandChild gc3;
  gc3 = gc1;
  cout << gc3;
} ///:~