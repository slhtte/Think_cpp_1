//: C16:TStack2Test.cpp
#include "TStack2.h"
#include "../../require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream file("TStack2Test.cpp");
  assure(file, "TStack2Test.cpp");
  Stack<string> textlines;
  // ������ ����� � �������� ����� � Stack:
  string line;
  while(getline(file, line))
    textlines.push(new string(line));
  int i = 0;
  // ������������� ��������� ��� ������ ����� �� ������:
  Stack<string>::iterator it = textlines.begin();
  Stack<string>::iterator* it2 = 0;
  while(it != textlines.end()) {
    cout << it->c_str() << endl;
    it++;
    if(++i == 10) // �������� ��������� ��� 10-� ������
      it2 = new Stack<string>::iterator(it);
  }
  cout << (*it2)->c_str() << endl;
  delete it2;
} ///:~