#include <iostream>
#include <ctime>
using namespace std;

class Base
{
public:
	void f() const { /*cout << "Base::f()\n";*/ }
	virtual void f_v() const { /*cout << "Base::f_v()\n";*/ }
};

class Derived : public Base {};

int main()
{
	Base *b = new Derived;

	unsigned long int start = clock();

	for (int i = 0; i < 100000000; ++i)
	{
		b->f();
	}

	unsigned long int end = clock();
	cout << "f(): " << end - start << endl;

	start = clock();

	for (int i = 0; i < 100000000; ++i)
	{
		b->f_v();
	}

	end = clock();
	cout << "f_v(): " << end - start << endl;
}