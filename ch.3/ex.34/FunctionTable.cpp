//: C03:FunctionTable.cpp
// ������������� ������� ���������� �� �������
#include <iostream>
#include <string>
using namespace std;

// ������ ��� ����������� ��������� �������:
#define DF(N) string N() { \
return "function " #N " called..."; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

string (*func_table[])() = { a, b, c, d, e, f, g };

int main() {
while(1) {
cout << "press a key from 'a' to 'g' "
"or q to quit" << endl;
char c, cr;
cin.get(c); cin.get(cr); // ������ �������� - ��� �������� �������
if ( c == 'q' )
break; // ... ����� �� while(1)
if ( c < 'a' || c > 'g' )
continue;
cout << (*func_table[c - 'a'])() << endl;
}
} ///:~
