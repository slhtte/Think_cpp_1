//: C14:InheritStack2.cpp
// Композиция и наследование
#include <vector>
#include "../../require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class StringStack {
  vector<string> stack; // Внедрение объекта вместо наследования
public:
  void push(string* str) {
    stack.push_back(*str);
  }
  string* peek() const {
    return const_cast<string *>(&stack[stack.size() - 1]);
  }
  string* pop() {
    if (stack.size() != 0)
    {
      string *res = peek();
      stack.erase(stack.end() - 1);
      return res;
    }

    return nullptr;
  }
};

int main() {
  ifstream in("InheritStack2.cpp");
  assure(in, "InheritStack2.cpp");
  string line;
  StringStack textlines;
  while(getline(in, line))
    textlines.push(new string(line));
  string* s;
  while((s = textlines.pop()) != 0) // Без приведения типа!
    cout << *s << endl;
} ///:~