//: C12:IostreamOperatorOverloading.cpp
// Пример перегрузки операторов, не являющихся членами классов
#include "../../require.h"
#include <iostream>
#include <sstream> // "String streams"
#include <cstring>
using namespace std;

template <typename T, int size = 5>
class IntArray {
T i[size];
int sz;
public:
IntArray() : sz(size) { memset(i, 0, sz* sizeof(T)); }
T& operator[](int x) {
require(x >= 0 && x < sz,
"IntArray::operator[] out of range");
return i[x];
}

friend ostream&
operator<<(ostream& os, const IntArray& ia)
{
for(int j = 0; j < ia.sz; j++) {
os << ia.i[j];
if(j != ia.sz -1)
os << ", ";
}
os << endl;
return os;
}

friend istream&
operator>>(istream& is, IntArray& ia)
{
for(int j = 0; j < ia.sz; j++)
is >> ia.i[j];
return is;
}
};

int main() {
stringstream input("47 34 56 92 103");
IntArray<int> I;
input >> I;
I[4] = -1; // Используется перегруженный оператор []
cout << I;
} ///:~