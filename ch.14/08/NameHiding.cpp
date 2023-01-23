//: C14:NameHiding.cpp
// Замещение перегруженных имен в результате наследования
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
  int f() const { 
    cout << "Base::f()\n"; 
    return 1; 
  }
  int f(string) const { return 1; }
  void g() {}

  int h(int) const { cout << "Base::h(int)\n"; return 1; }
  void h() const { cout << "Base::h()\n"; }
  bool h(string) const { cout << "Base::h(string)\n"; return true; }
};

class Derived1 : public Base {
public:
  void g() const {}

};

class Derived2 : public Base {
public:
  // Переопределение:
  int f() const { 
    cout << "Derived2::f()\n"; 
    return 2;
  }


};

class Derived3 : public Base {
public:
  // Изменение типа возвращаемого значения:
  void f() const { cout << "Derived3::f()\n"; }

  int h(char) const { cout << "Derived::h(int)\n"; return 1; }
};

class Derived4 : public Base {
public:
  // Изменение списка аргументов:
  int f(int) const { 
    cout << "Derived4::f()\n"; 
    return 4; 
  }
};

int main() {
  Derived1 d1;
  Derived2 d2;
  Derived3 d3;

  d1.h(1);
  d2.h();
  d3.h("hello");
} ///:~