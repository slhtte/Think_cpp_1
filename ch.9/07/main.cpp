#include <iostream>
#include <cstring>
using namespace std;

class C
{
	enum { size = 10 };
	char arr[size];
public:
	C(int i = 0)
	{
		memset(arr, i, size);
	}

	void print()
	{
		for (int i = 0; i < (sizeof(arr) / sizeof (*arr)); ++i)
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
};

int main()
{
	C c;
	c.print();
}