#include "printBinary.h"
#include <iostream>
using namespace std;

string printBinary(const unsigned char val)
{
    string result = "";

    for (int i = 7; i >= 0; --i)
    {
        if (val & (1 << i))
        {
	    result += "1";
	}
	else
	{
	    result += "0";
	}
    }

    return result;
}
