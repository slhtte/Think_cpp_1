#include <iostream>
using namespace std;

class C
{
	int i;
public:
	C(int ii = 0) : i(ii) {}
	void print() const
	{
		cout << "C::i = " << i << endl;
	}
};

class K
{
	static C c;
public:
	static void print()
	{
		c.print();
	}
};

C K::c(42);

int main()
{
	K k;
	k.print();
}