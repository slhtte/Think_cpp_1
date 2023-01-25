//: C11:ReferenceToPointer.cpp
#include <iostream>
using namespace std;

void increment(int*& i) { i++; }

int main() {
  int* p = 0;
  int **pp = &p;
  cout << "i = " << (long)pp << endl;
  increment(i);
  cout << "i = " << (long)pp << endl;
} ///:~