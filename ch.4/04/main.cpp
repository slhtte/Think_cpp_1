#include <iostream>
using namespace std;

struct S
{
    int x;
};

void func1(S *s, int x)
{
    s->x = x;
}

void func2(S *s)
{
    cout << "s->x = " << s->x << endl;
}

int main()
{
    S s;
    func2(&s);
    func1(&s, 5);
    func2(&s);
}
