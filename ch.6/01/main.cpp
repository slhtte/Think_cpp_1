#include <iostream>
using namespace std;

class Simple
{
public:
    Simple();
};

Simple::Simple()
{
    cout << "Simple::constructor() called...\n";
}

int main()
{
    Simple s;
}
