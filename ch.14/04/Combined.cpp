//: C14:Combined.cpp
// Наследование и композиция

#include <iostream>
using namespace std;

class A {
  int i;
public:
  A(int ii) : i(ii) { cout << "A::A(int)...\n"; }
  ~A() { cout << "A::~A()...\n"; }
  void f() const {}
};

class B {
  int i;
public:
  B(int ii) : i(ii) { cout << "B::B(int)...\n"; }
  ~B() { cout << "B::~B()...\n"; }
  void f() const {}
};

class C : public B {
  A a;
public:
  C(int ii) : B(ii), a(ii) { cout << "C::C(int)...\n"; }
  ~C() {} // Вызывает ~A() и ~B()
  void f() const {  // Переопределение
    a.f();
    B::f();
  }
};

class D : public C
{
public:
  D() : C(47) { cout << "D::D()...\n"; }
  ~D() { cout << "D::~D()...\n"; }
};

int main() {
  D d;
} ///:~