//: C03:Union.cpp
// ������ � ���������� ������������� �����������
#include <iostream>
using namespace std;

union Packed { // ���������� �������� ����� ��� ��, ��� ��� ���������
char i;
short j;
int k;
long l;
float f;
double d;
// ������ ����������� ����� ������� double,
// ��������� ������� ����� ���� �������� ����������.
}; // �����������, ��� � ���������, ����������� �������� ";"

int main() {
cout << "sizeof(Packed) = "
<< sizeof(Packed) << endl;
Packed x;
x.i = 'c';
cout << x.i << endl;
x.f = 3.14159;
cout << x.f << endl;
cout << "x.j = " << x.j << endl;
cout << "x.k = " << x.k << endl;
cout << "x.l = " << x.l << endl;
cout << "x.d = " << x.d << endl;
} ///:~