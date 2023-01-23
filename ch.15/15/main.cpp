#include <iostream>
using namespace std;

class Base
{
public:
	virtual void f() const { cout << "Base::f()\n"; }
	Base() 
	{ 
		cout << "Base()\n";
		f(); 
	}
	void func()
	{
		f();
	}
};

class Direvid : public Base
{
public:
	void f() const { cout << "Direvid::f()\n"; }
	Direvid()
	{
		cout << "Direvid()\n";
		f();
	}

	void func()
	{
		f();
	}
};

int main()
{
	Base *b = new Direvid;
	b->func();
}