//: C12:IntegerTest.cpp
//{L} Integer
#include "Integer.h"
#include <fstream>
#include "Byte.h"
using namespace std;


ofstream I_out("IntegerTest.out");

void h(Integer& c1, Integer& c2) {
// Ñëîæíîå âûðàæåíèå:
c1 += c1 * c2 + c2 % c1;
#define TRY(OP) \
I_out << "c1 = "; c1.print(I_out); \
I_out << ", c2 = "; c2.print(I_out); \
I_out << "; c1 " #OP " c2 produces "; \
(c1 OP c2).print(I_out); \
I_out << endl;
TRY(+) TRY(-) TRY(*) TRY(/)
TRY(%) TRY(^) TRY(&) TRY(|)
TRY(<<) TRY(>>) TRY(+=) TRY(-=)
TRY(*=) TRY(/=) TRY(%=) TRY(^=)
TRY(&=) TRY(|=) TRY(>>=) TRY(<<=)
// Óñëîâíûå îïåðàòîðû:
#define TRYC(OP) \
I_out << "c1 = "; c1.print(I_out); \
I_out << ", c2 = "; c2.print(I_out); \
I_out << "; c1 " #OP " c2 produces "; \
I_out << (c1 OP c2); \
I_out << endl;
TRYC(<) TRYC(>) TRYC(==) TRYC(!=) TRYC(<=)
TRYC(>=) TRYC(&&) TRYC(||)
}

void f(Integer a) {
  +a;
  -a;
  ~a;
  Integer* ip = &a;
  !a;
  ++a;
  a++;
  --a;
  a--;
}


ofstream out("ByteTest.out");

void k(Byte& b1, Byte& b2) {
b1 = b1 * b2 + b2 % b1;

#define TRY2(OP) \
out << "b1 = "; b1.print(out); \
out << ", b2 = "; b2.print(out); \
out << "; b1 " #OP " b2 produces "; \
(b1 OP b2).print(out); \
out << endl;

b1 = 9; b2 = 47;
TRY2(+) TRY2(-) TRY2(*) TRY2(/)
TRY2(%) TRY2(^) TRY2(&) TRY2(|)
TRY2(<<) TRY2(>>) TRY2(+=) TRY2(-=)
TRY2(*=) TRY2(/=) TRY2(%=) TRY2(^=)
TRY2(&=) TRY2(|=) TRY2(>>=) TRY2(<<=)
TRY2(=) // Îïåðàòîð ïðèñâàèâàíèÿ

// Óñëîâíûå îïåðàòîðû:
#define TRYC2(OP) \
out << "b1 = "; b1.print(out); \
out << ", b2 = "; b2.print(out); \
out << "; b1 " #OP " b2 produces "; \
out << (b1 OP b2); \
out << endl;

b1 = 9; b2 = 47;
TRYC2(<) TRYC2(>) TRYC2(==) TRYC2(!=) TRYC2(<=)
TRYC2(>=) TRYC2(&&) TRYC2(||)

// Öåïî÷å÷íîå ïðèñâàèâàíèå:
Byte b3 = 92;
b1 = b2 = b3;
}

void g(Byte b) {
  +b;
  -b;
  ~b;
  Byte* bp = &b;
  !b;
  ++b;
  b++;
  --b;
  b--;
}

int main() {
cout << "friend functions" << endl;
Integer c1(47), c2(9);
h(c1, c2);

out << "member functions:" << endl;
Byte b1(47), b2(9);
k(b1, b2);

  Integer a;
  f(a);
  Byte b;
  g(b);
} ///:~