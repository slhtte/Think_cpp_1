#include <iostream>
using namespace std;

struct S
{
    void func();
};

void S::func()
{
    cout << "S::func() called ...\n";
}

int main()
{
    S s;
    s.func();
}
