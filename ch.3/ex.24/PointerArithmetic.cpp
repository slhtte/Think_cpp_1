//: C03:PointerArithmetic.cpp
#include <iostream>
using namespace std;

#define P(EX) cout << #EX << ": " << EX << endl;

int main() {
long double a[10];
for(int i = 0; i < 10; i++)
a[i] = i; // ��������� �������� ��������
long double* ip = a;
P(*ip);
P(*++ip);
P(*(ip + 5));
long double* ip2 = ip + 5;
P(*ip2);
P(*(ip2 - 4));
P(*--ip2);
P(ip2 - ip); // ���������� ���������� ���������
} ///:~