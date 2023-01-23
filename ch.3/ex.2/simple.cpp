#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; ++i)
	{
		int del = 0;
		for (int j = 1; j <= 100; ++j)
		{
			if (!(i%j))
			{
				++del;
			}
		}

		if (del == 2)
		{
			cout << i << endl;
		}
	}
}