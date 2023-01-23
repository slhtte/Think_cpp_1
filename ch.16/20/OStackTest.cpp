//: C15:OStackTest.cpp
//{T} OStackTest.cpp
#include "OStack.h"
#include "../../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// ������������� ������������. ����� ������ ���� �����������
// ��� �� string, ��� � �� Object:
class MyString: public string, public Object {
public:
  ~MyString() {
    cout << "deleting string: " << *this << endl;
  }
  MyString(string s) : string(s) {}
};

int main() {
  ifstream in("OStackTest.cpp");
  Stack<string> textlines;
  string line;
  // ������ ����� � ���������� ����� � �����:
  while(getline(in, line))
    textlines.push(new string(line));
  // ���������� ����� �� �����:
  string* s;
  for(int i = 0; i < 10; i++) {
    if((s=(string*)textlines.pop())==0) break;
      cout << *s << endl;
      delete s;
  }
  cout << "Letting the destructor do the rest:"
    << endl;
} ///:~