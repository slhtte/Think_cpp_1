//: C05:Handle.cpp {O}
// Реализация класса-манипулятора
#include "Handle.h"
#include "../require.h"
#include <iostream>
using namespace std;

// Определение реализации Handle:
struct Handle::Cheshire {
  int i;
  Cheshire();
  ~Cheshire();
};

Handle::Cheshire::Cheshire()
{
    cout << "Cheshire::constructor() called...\n";
}

Handle::Cheshire::~Cheshire()
{
   cout << "Cheshire::destructor() called...\n";
}

Handle::Handle(int ii) {
  cout << "Handle::constructir() called...\n";
  smile = new Cheshire();
  smile->i = ii;
}

Handle::~Handle() {
    cout << "Handle::destructor() called...\n"
	 << "Handle::Cheshire::i = " << smile->i << endl;
    delete smile;
}

int Handle::read() {
  return smile->i;
}

void Handle::change(int x) {
  smile->i = x;
} ///:~
