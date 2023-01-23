//: C09:Cpptime.cpp
// Тестирование простого класса для работы со временем
#include "Cpptime.h"
#include "classes.h"
#include <iostream>
using namespace std;
int main() {
  Time start;
  
  int size = 1024 * 1024;
  B b[size];

  Time end;
  cout << endl;
  cout << "start = " << start.ascii();
  cout << "end = " << end.ascii();
  cout << "delta = " << end.delta(&start);
} ///:~