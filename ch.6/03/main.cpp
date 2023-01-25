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
    Simple s(2);
}
