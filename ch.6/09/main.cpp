#include <iostream>
using namespace std;

class Simple
{
    int i;

public:
    Simple(int ii);
    ~Simple();
    void print();
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

void Simple::print()
{
    cout << "Simple::i = " << i << endl;
}

int main()
{
    Simple s[] = { Simple(1), Simple(3), Simple(5) };
    for (int i = 0; i < sizeof(s) / sizeof(*s); ++i)
    {
        s[i].print();
    }
}
