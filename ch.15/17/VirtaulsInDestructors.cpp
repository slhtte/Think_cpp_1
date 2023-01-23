//: C15:VirtualsInDestructors.cpp
// Вызов виртуальных функций из деструктора
#include <iostream>
using namespace std;

class Base {
public:
  virtual ~Base() { 
    cout << "Base1()\n"; 
    f(); 
  }
  virtual void f() { cout << "Base::f()\n"; }
};

class Derived : public Base {
public:
  ~Derived() { cout << "~Derived()\n"; f(); }
  void f() { cout << "Derived::f()\n"; }
};

class Derived_1 : public Derived
{
public:
	~Derived_1() { cout << "~Derived_1()\n"; f(); }
	void f() { cout << "Derived_1::f()\n"; }
};

int main() {
  Base* bp = new Derived_1; // Повышающее приведение типа
  delete bp;
} ///:~