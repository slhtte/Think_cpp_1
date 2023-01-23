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
  Derived2 d2;
  Derived3 d3;
  Derived4 d4;

  //cout << d2.f() << endl;
  //cout << d2.f("hello") << endl;

  //int dd3 = d3.f();
  //int dd3 = d3.f("hello");

  //int dd4 = d4.f();
  int dd4 = d4.f("hello");
} ///:~