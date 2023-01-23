#include <iostream>
using namespace std;

class Base
{
public:
	virtual Base* clone()
	{
		Base *tmp = new Base(*this);
		cout << "Base::clone()\n";
		return tmp;
	}

	virtual ~Base() {}
};

class Derived_1 : public Base
{
public:
	Derived_1 *clone()
	{
		Derived_1 *tmp = new Derived_1(*this);
		cout << "Derived_1::clone()\n";
		return tmp;
	}
};

class Derived_2 : public Base
{
public:
	Derived_2 *clone()
	{
		Derived_2 *tmp = new Derived_2(*this);
		cout << "Derived_2::clone()\n";
		return tmp;
	}
};

int main()
{
	Derived_1 d1;
	Derived_2 d2;

	Base *b1 = static_cast<Base *>(&d1);
	Base *b2 = static_cast<Base *>(&d2);

	//Base *b1_clone = b1->clone();
	Base *b3 = d1.clone();
	Base *b4 = b3->clone();
	Derived_1 *d1_clone = dynamic_cast<Derived_1 *>(b4);
	cout << (unsigned long)d1_clone << endl;
}