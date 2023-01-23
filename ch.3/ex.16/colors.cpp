#include <iostream>
using namespace std;

enum Colors
{
    RED = 1,
    BLUE = 3,
    BLACK = 7
};

int main()
{
    for (int i = 0; i < 10; ++i)
    {
	switch(i)
	{
	    case RED:  cout << i << " is RED\n";   break;
	    case BLUE: cout << i << " is BLUE\n;"; break;
	    case BLACK: cout << i << "is BLACK\n"; break;
	    default: cout << i << " doesn't match any color\n";
	}
    }
}