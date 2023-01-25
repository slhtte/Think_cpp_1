#include <iostream>
using namespace std;

class C
{
public:
	void f() { cout << "C::f()\n"; }
	void f_c() const { cout << "C::f_c()\n"; }
};

void f(const C *c)
{
	c->f();
	c->f_c();
}

int main()
{
	C c;
	f(c);
}