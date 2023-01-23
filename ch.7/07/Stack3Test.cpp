//: C06:Stack3Test.cpp
//{L} Stack3
//{T} Stack3Test.cpp
// ������������ � �����������
#include "Stack3.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  requireArgs(argc, 1); // �������� - ��� �����
  ifstream in(argv[1]);
  assure(in, argv[1]);
  string line;
  vector<string> vec;
  // ������ ����� � ���������� ����� � �����:
  while(getline(in, line))
  {
      vec.push_back(line);
  }

  string arr[vec.size()];
  for (int i = 0; i < vec.size(); ++i)
  {
      arr[i] = vec[i];
  }

  Stack textlines(arr, vec.size()); 
  // ���������� ����� �� ����� � �����:
  string* s;
  while((s = (string*)textlines.pop()) != 0) {
    cout << *s << endl;
    delete s; 
  }
} ///:~
