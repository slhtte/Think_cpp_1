#include <iostream>
using namespace std;

struct S1
{
    struct S2
    {
        int x;
        void print();
    }s2;

    int x;
    void print();
};

void S1::print()
{
    cout << "S1::x = " << x << endl;
    s2.print();
}

void S1::S2::print()
{
    cout << "S1::S2::x = " << x << endl;
}

int main()
{
    S1 s1;
    s1.print();
}
