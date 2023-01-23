#include <iostream>
using namespace std;

#define F(A) cout << "sizeof(" #A ") = " << sizeof(A) << endl;

enum Color : unsigned char
{
    RED = 1,
    BLACK = 3
};

union Un
{
    int x;
    bool b;
    double d;
};

int main()
{
    F(Color);
    F(Un);
}
