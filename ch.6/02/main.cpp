#include <iostream>
using namespace std;

class Simple
{
public:
    Simple();
    ~Simple();
};

Simple::Simple()
{
    cout << "Simple::constructor() called...\n";
}

Simple::~Simple()
{
    cout << "Simple::desytuctor() called...\n";
}

int main()
{
    Simple s;
}
