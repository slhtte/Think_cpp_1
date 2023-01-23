#include <iostream>
using namespace std;

class Base
{
	int b;
};

class Derived : public Base
{
	int d;
};

void func(Base b)
{
	cout << "sizeof(Base) = " << sizeof(b) << endl;
}

int main()
{
	Derived d;
	cout << "sizeof(Derived) = " << sizeof(d) << endl;


	func(d); 
}