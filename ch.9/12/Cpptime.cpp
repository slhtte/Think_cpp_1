//: C09:Cpptime.cpp
// Тестирование простого класса для работы со временем
#include "Cpptime.h"
#include <iostream>
using namespace std;
int main() {
  Time start;
  while (true)
  {
    if (cin.get())
    {
      break;
    }
  }
  Time end;
  cout << endl;
  cout << "start = " << start.ascii();
  cout << "end = " << end.ascii();
  cout << "delta = " << end.delta(&start);
} ///:~