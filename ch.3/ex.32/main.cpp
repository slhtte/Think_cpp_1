#include <iostream>
using namespace std;

int foo(double d)
{
    return (int)d;
}

int main()
{
    int (*fp)(double);
    fp = foo;
    cout << (*fp)(2.4) << endl;
}
