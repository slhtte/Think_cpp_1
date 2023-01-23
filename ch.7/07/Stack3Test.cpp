//: C06:Stack3Test.cpp
//{L} Stack3
//{T} Stack3Test.cpp
// Конструкторы и деструкторы
#include "Stack3.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  requireArgs(argc, 1); // Аргумент - имя файла
  ifstream in(argv[1]);
  assure(in, argv[1]);
  string line;
  vector<string> vec;
  // Чтение файла и сохранение строк в стеке:
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
  // Извлечение строк из стека и вывод:
  string* s;
  while((s = (string*)textlines.pop()) != 0) {
    cout << *s << endl;
    delete s; 
  }
} ///:~
