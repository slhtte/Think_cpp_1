//: C15:AddingVirtuals.cpp
// Добавление виртуальных функций при наследовании
#include <iostream>
#include <string>
using namespace std;

class Pet {
  string pname;
public:
  Pet(const string& petName) : pname(petName) {}
  virtual string name() const = 0;
  virtual string speak() const = 0;
};

string Pet::name() const { return pname; }

class Dog : public Pet {
  string pname;
public:
  Dog(const string& petName) : Pet(petName) {}
  // Новая виртуальная функция в классе Dog:
  virtual string sit() const {
    return Pet::name() + " sits";
  }
  string name() const { return Pet::name(); } 
  string speak() const { // Переопределение
    return Pet::name() + " says 'Bark!'";
  }
};

int main() {
  Pet* p[] = {new Dog("generic"),new Dog("bob")};
  cout << "p[0]->speak() = "
       << p[0]->speak() << endl;
  cout << "p[1]->speak() = "
       << p[1]->speak() << endl;
//! cout << "p[1]->sit() = "
//!      << p[1]->sit() << endl; // Недопустимо
} ///:~