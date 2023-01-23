#include <iostream>
using namespace std;

struct S
{
    int x;
    void func1(int arg);
    void func2();
};

void S::func1(int arg)
{
    x = arg;
}

void S::func2()
{
    cout << "s.x = " << x << endl;
}

int main()
{
    S s;
    s.func2();
    s.func1(5);
    s.func2();
}
