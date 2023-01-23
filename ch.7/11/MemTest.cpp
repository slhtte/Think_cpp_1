//: C07:MemTest.cpp
// Тестирование класса Mem
//{L} Mem
#include "Mem.h"
#include <cstring>
#include <iostream>
using namespace std;

class MyString {
  Mem* buf;
public:
  MyString();
  MyString(char* str);
  ~MyString();
  void concat(char* str);
  void print(ostream& os);
  bool moved();
};

MyString::MyString() {  buf = 0; }

MyString::MyString(char* str) {
  buf = new Mem(strlen(str) + 1);
  strcpy((char*)buf->pointer(), str);
}

void MyString::concat(char* str) {
  if(!buf) buf = new Mem;
  strcat((char*)buf->pointer(
    buf->msize() + strlen(str) + 1), str);
}

void MyString::print(ostream& os) {
  if(!buf) return;
  os << buf->pointer() << endl;
}

MyString::~MyString() { delete buf; }

bool MyString::moved()
{
  if (buf) return buf->moved();
  return false;
}

int main() {
  MyString s("My test string");
  if (s.moved())  cout << "was moved() after str.46\n";
  s.print(cout);
  s.concat(" some additional stuff");
  if (s.moved())  cout << "was moved() after str.49\n";
  s.print(cout);
  MyString s2;
  if (s2.moved())  cout << "was moved() after str.52\n";
  s2.concat("Using default constructor");
  if (s2.moved())  cout << "was moved() after str.54\n";
  s2.print(cout);
} ///:~