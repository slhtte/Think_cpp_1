//: C13:PStashTest.cpp
//{L} PStash
// Тестирование контейнера Stash для указателей
#include "PStash.h"
#include "../../require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Asteroid_1
{
  PStash stash;
  int i;
public:
  Asteroid_1(int ii = 0) : i(ii) {}
  int add(Asteroid_1* a) { return stash.add(a); }
  Asteroid_1* operator[](int ii) { return (Asteroid_1 *)stash[ii]; }
  Asteroid_1* remove(int ii) { return (Asteroid_1 *)stash.remove(i); }
  int count() const { return stash.count(); }
  friend ostream& operator<<(ostream &os, const Asteroid_1 &a)
  {
    return os << a.i;
  }
};

int main() {
  Asteroid_1 intStash;
  // 'new' также работает со встроенными типами. Обратите внимание
  // на синтаксис "псевдоконструктора":
  for(int i = 0; i < 25; i++)
    intStash.add(new Asteroid_1(i));
  for(int j = 0; j < intStash.count(); j++)
    cout << "intStash[" << j << "] = "
         << *intStash[j] << endl;
  // Зачистка:
  for(int k = 0; k < intStash.count(); k++)
    delete intStash.remove(k);
} ///:~