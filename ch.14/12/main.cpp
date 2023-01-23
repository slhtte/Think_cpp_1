//: C13:PStashTest.cpp
//{L} PStash
// Тестирование контейнера Stash для указателей
#include "../../require.h"
#include <iostream>
#include <vector>
using namespace std;

class Asteroid_1
{
  vector<Asteroid_1 *> stash;
  int i;
public:
  Asteroid_1(int ii = 0) : i(ii) {}
  void push_back(Asteroid_1* a) { stash.push_back(a); }
  Asteroid_1* operator[](int ii) { return stash[ii]; }
  Asteroid_1* erase(int ii);
  int size() const { return stash.size(); }
  friend ostream& operator<<(ostream &os, const Asteroid_1 &a)
  {
    return os << a.i;
  }

  void clear() { stash.clear(); }
};

Asteroid_1* Asteroid_1::erase(int ii)
{
  Asteroid_1 *tmp = stash[ii];
  stash[ii] = nullptr;
  cout << "earse(): size = " << stash.size() << endl;
  return tmp;
}

class Asteroid_2 : public vector<Asteroid_2 *>
{
  int i = 0;
public:
  Asteroid_2(int ii = 0) : i(ii) {}
  void push_back(Asteroid_2 *a) { vector<Asteroid_2 *>::push_back(a); }
  friend ostream& operator<<(ostream &os, const Asteroid_2 &a)
  {
    return os << a.i;
  }
};

int main() {
  Asteroid_2 intStash;
  // 'new' также работает со встроенными типами. Обратите внимание
  // на синтаксис "псевдоконструктора":
  for(int i = 0; i < 25; i++)
    intStash.push_back(new Asteroid_2(i));
  for(int j = 0; j < intStash.size(); j++)
    cout << "intStash[" << j << "] = "
         << *intStash[j] << endl;

  intStash.clear();

  cout << "vector.size() = " << intStash.size() << endl;
} ///:~