#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "called A()...\n";
	}
};

class B
{
	A a;
public:
	B()
	{
		cout << "called B()...\n";
	}
};

int main()
{
	B b[5];
}