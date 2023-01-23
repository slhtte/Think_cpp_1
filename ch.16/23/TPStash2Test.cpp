//: C16:TPStash2Test.cpp
#include "TPStash2.h"
#include "../../require.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Int {
  int i;
public:
  Int(int ii = 0) : i(ii) {
    cout << ">" << i << ' ';
  }
  ~Int() { cout << "~" << i << ' '; }
  operator int() const { return i; }
  friend ostream&
    operator<<(ostream& os, const Int& x) {
      return os << "Int: " << x.i;
  }
  friend ostream&
    operator<<(ostream& os, const Int* x) {
      return os << "Int: " << x->i;
  }
};

int main() {
  { // Для обеспечения вызова деструктора
    PStash<Int> ints;
    for(int i = 0; i < 30; i++)
      ints.add(new Int(i));
    cout << endl;
    PStash<Int>::iterator it = ints.end();
    PStash<Int>::iterator it2 = it - 10;
    for(; it != it2; it2++)
      delete it2.remove(); // Стандартное удаление
    cout << endl;
    for(it = ints.begin();it != ints.end();it++)
      if(*it) // Remove() создает "дыры"
        cout << *it << endl;
  } // Здесь вызывается деструктор "ints"
  cout << "\n-------------------\n";  
  ifstream in("TPStash2Test.cpp");
  assure(in, "TPStash2Test.cpp");
  // Специализация для string:
  PStash<string> strings;
  string line;
  while(getline(in, line))
    strings.add(new string(line));
  PStash<string>::iterator sit = strings.begin();
  for(; sit != strings.end(); sit++)
    cout << **sit << endl;
  sit = strings.begin();
  int n = 26;
  sit += n;
  for(; sit != strings.end(); sit++)
    cout << n++ << ": " << **sit << endl;
} ///:~