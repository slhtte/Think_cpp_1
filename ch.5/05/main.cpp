#include <iostream>
using namespace std;

class Class_2;
class Class_1;

class Class_3
{
public:
    void f(Class_1 *c1, int xx);
};

class Class_1
{
    int x;

public:
    friend Class_2;
    friend void Class_3::f(Class_1 *c1, int xx);
};

class Class_2
{
public:
    void f(Class_1 *c1, int xx);
};

void Class_2::f(Class_1 *c1, int xx)
{
    c1->x = xx;
    cout << "Class_2::f() called, c1.x = " << c1->x << endl;
}

void Class_3::f(Class_1 *c1, int xx)
{
    c1->x = xx;
    cout << "Class_3::f() called, c1.x = " << c1->x << endl;
}

int main()
{
    Class_1 c1;
    Class_2 c2;
    Class_3 c3;

    c2.f(&c1, 2);
    c3.f(&c1, 3);
}
