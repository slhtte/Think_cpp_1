#include <iostream>
using namespace std;

#define F(A) cout << "sizeof(" #A ") = " << sizeof(A) << endl;

struct S_int
{
    int x;
};

struct S_int_char
{
    int x;
    char c;
};

struct S_int_intfunc
{
    int x;
    int f();
};

int S_int_intfunc::f()
{
    return x;
}

struct S_doublefunc
{
    double f();
};

double S_doublefunc::f()
{
    return 0.1;
}

int main()
{
    F(S_int);
    F(S_int_char);
    F(S_int_intfunc);
    F(S_doublefunc);
}
