//: C15:Early.cpp
// Раннее связывание и виртуальные функции
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
  virtual string speak() const { return ""; }
};

class Dog : public Pet {
public:
  string speak() const { return "Bark!"; }
};

int main() {
  Dog ralph;
  Pet* p1 = &ralph;
  Pet& p2 = ralph;
  Pet p3;
  // Позднее связывание в обоих случаях:
  cout << "p1->speak() = " << p1->speak() <<endl;
  cout << "p2.speak() = " << p2.speak() << endl;
  // Раннее связывание (вероятно):
  cout << "p3.speak() = " << p3.speak() << endl;
} ///:~