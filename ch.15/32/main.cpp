#include <iostream>
using namespace std;

class Base1
{
public:
	virtual ~Base1() {}
};

class Base2
{
public:
	virtual ~Base2() {}
};

class Derived : public Base1, public Base2
{};

int main()
{
	cout << "sizeof(Base) = " << sizeof(Base1) << endl;
	cout << "sizeof(Derived) = " << sizeof(Derived) << endl;
}