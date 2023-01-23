//: C14:Car.cpp
// Композиция с открытыми внутренними объектами

#include <iostream>
using namespace std;

class Engine {
public:
  void start() const {}
  void rev() const {}
  void stop() const {}
};

class Wheel {
public:
  void inflate(int psi) const {}
};

class Window {
public:
  void rollup() const {}
  void rolldown() const {}
};

class Door {
public:
  Window window;
  void open() const {}
  void close() const {}
};

class Vehicle
{
public:
  Vehicle(int) { cout << "Vehicle(int)...\n"; }
  void drive() const { cout << "Vehicle::drive()...\n"; }
  void swim() const { cout << "Vehicle::swim()...\n"; }
};

class Car : public Vehicle {
public:
  Engine engine;
  Wheel wheel[4];
  Door left, right; // У автомобиля две двери
  Car() : Vehicle(42) {}
};

int main() {
  Car car;
  car.left.window.rollup();
  car.wheel[0].inflate(72);
  car.drive();
  car.swim();
} ///:~