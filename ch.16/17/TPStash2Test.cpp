//: C16:TPStash2Test.cpp
#include "TPStash2.h"
#include "../../require.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class Int {
  T i;
public:
  Int(T ii = 0) : i(ii) {
    cout << ">" << i << ' ';
  }
  ~Int() { cout << "~" << i << ' '; }
  operator T() const { return i; }
  friend ostream&
    operator<<(ostream& os, const Int<T>& x) {
      return os << "Int: " << x.i;
  }
  friend ostream&
    operator<<(ostream& os, const Int<T>* x) {
      return os << "Int: " << x->i;
  }
};

int main() {
  { // Для обеспечения вызова деструктора
    PStash< Int<float> > ints;
    for(int i = 0; i < 30; i++)
      ints.add(new Int<float>(i + i * 0.1));
    cout << endl;
    PStash< Int<float> >::iterator it = ints.begin();
    it += 5;
    PStash< Int<float> >::iterator it2 = it + 10;
    for(; it != it2; it++)
      delete it.remove(); // Стандартное удаление
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