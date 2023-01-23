#include <iostream>
#include "printBinary.h"
using namespace std;

int main()
{
	float f = 5.0;
	float *p_f = &f;
	unsigned char *p = (unsigned char *)p_f;

	for (int i = 0; i <= sizeof(float) - 1; ++i)
	{
		printBinary(p[i]);
		cout << " ";
	}

	cout << endl;
}