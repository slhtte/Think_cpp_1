//: C08:StringStack.cpp
// »спользование static const дл€ создани€
// констант времени компил€ции в классе
#include <string>
#include <iostream>
#include "MyString.h"
using namespace std;

class StringStack {
  static const int size = 100;
  const MyString* stack[size];
  int index;
public:
  StringStack();
  void push(const MyString* s);
  const MyString* pop();
};

StringStack::StringStack() : index(0) {}

void StringStack::push(const MyString* s) {
  if(index < size)
    stack[index++] = s;
}

const MyString* StringStack::pop() {
  if(index > 0) {
    const MyString* rv = stack[--index];
    stack[index] = 0;
    return rv;
  }
  return 0;
}

MyString iceCream[] = {
  "pralines & cream",
  "fudge ripple",
  "jamocha almond fudge",
  "wild mountain blackberry",
  "raspberry sorbet",
  "lemon swirl",
  "rocky road",
  "deep chocolate fudge"
};

const int iCsz = 
  sizeof iceCream / sizeof *iceCream;

int main() {
  StringStack ss;
  for(int i = 0; i < iCsz; i++)
    ss.push(&iceCream[i]);
  const MyString* cp;
  while((cp = ss.pop()) != 0)
    cout << cp->print() << endl;
} ///:~