#include <iostream>
using namespace std;

class Base
{
public:
	virtual void f() { cout << "Base::f()\n"; }
	virtual void f(int) { cout << "Base::f(int)\n"; }
	virtual void f(bool) { cout << "Base::f(bool)\n"; }
};

class Derived : public Base
{
public: 
	//void f() { cout << "Derived::f()\n"; }
};

int main()
{
	Derived b;
	Base &d = b;
	d.f();
	d.f(1);
	d.f(true);
}