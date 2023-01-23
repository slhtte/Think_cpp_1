#include <iostream>
using namespace std;

class C
{
public:
    void f(int i = 0, int ii = 0, int iii = 0);
};

void C::f(int i, int ii, int iii)
{
    if (i == 0 && ii == 0 && iii == 0)
    {
        cout << "f() without argument\n";
    }
    else if (ii == 0 && iii == 0)
    {
        cout << "f() with 1 arg\n";
    }
    else if (iii == 0)
    {
        cout << "f() with 2 args\n";
    }
    else
    {
        cout << "f() with 3 args\n";
    }
}

int main()
{
    C c;
    c.f();
    c.f(1);
    c.f(1, 2);
    c.f(1, 2, 3);
}
