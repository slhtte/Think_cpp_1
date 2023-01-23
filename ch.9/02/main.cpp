#include <iostream>
using namespace std;

#define FLOOR(x,b) (x>=b?0:1)

int main()
{
	int a = 0x01;
	
	if (FLOOR(a&0x0f,0x07))
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}