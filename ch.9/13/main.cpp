#include <iostream>
using namespace std;

class C
{
public:
	void f1()
	{
		cout << "call f1()...\n";
		f2();
	}

	void f2()
	{
		cout << "call f2()...\n";
	}
};

int main()
{
	C c;
	c.f1();
}