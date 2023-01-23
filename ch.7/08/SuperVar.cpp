//: C07:SuperVar.cpp
// Универсальная переменная
#include <iostream>
using namespace std;

class SuperVar {
public:
#ifdef VARTYPE
#define VAR
  enum {
    character,
    integer,
    floating_point
  };  // Определение типа
#endif

private:
  union {  // Анонимное объединение
    char c;
    int i;
    float f;
  };
public:
  SuperVar(char ch);
  SuperVar(int ii);
  SuperVar(float ff);
  void print(int vartype = 0);
};

SuperVar::SuperVar(char ch) {
  c = ch;
}

SuperVar::SuperVar(int ii) {
  i = ii;
}

SuperVar::SuperVar(float ff) {
  f = ff;
}

void SuperVar::print(int vartype) {
#ifdef VAR
  switch (vartype) {
    case character:
      cout << "character: " << c << endl;
      break;
    case integer:
      cout << "integer: " << i << endl;
      break;
    case floating_point:
      cout << "float: " << f << endl;
      break;
  }
#else
  cout << "undefined type: " << f << endl;
#endif
}

int main() {
  SuperVar A('c'), B(12), C(1.44F);
  int a = 0;
  int b = 0;
  int c = 0;

#ifdef VAR
  a = (int)SuperVar::character;
  b = (int)SuperVar::integer;
  c = (int)SuperVar::floating_point;
#endif

  A.print(a);
  B.print(b);
  C.print(c);
} ///:~
