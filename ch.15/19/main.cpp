#include <iostream>
using namespace std;

class Base
{
public:
	virtual void MY_FUNC() const {}
};

class Derived : public Base
{
public:
	void MY_FUNC() const {}
};

int main()
{
	Base *b = new Derived;
	b->MY_FUNC();
}