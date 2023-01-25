#include <iostream>
using namespace std;

class Simple
{
    int i;

public:
    Simple(int ii);
    ~Simple();
};

Simple::Simple(int ii)
{
    cout << "Simple::constructor() called...\n"
	 << "Simple::i = " << i << endl << endl;
    i = ii;
}

Simple::~Simple()
{
    cout << "Simple::destructor() called...\n"
	 << "Simple::i = " << i << endl << endl;
}

int main()
{
    cout << "before breces...\n";
    {
	Simple s(2);
	goto stop;
    }
    cout << "after braces...\n";

stop:
    cout << "after stop...\n";
}
