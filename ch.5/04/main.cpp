#include <iostream>
using namespace std;

class C_2;

class C_1
{
public:
    void f(C_2 *c2);
};

class C_2
{
public:
    void f(C_1 *c1);
};

void C_1::f(C_2 *c2)
{
    cout << "C_2* = " << (long)c2 << endl;
}

void C_2::f(C_1 *c1)
{
    cout << "C_1* = " << (long)c1 << endl;
}

int main()
{
    C_1 c1;
    C_2 c2;
    c1.f(&c2);
    c2.f(&c1);
}
