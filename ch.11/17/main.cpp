#include <iostream>

class My_class
{
	double *d;
public:
	My_class(double dd = 0);
	My_class(const My_class &other);
	~My_class();
};

My_class::My_class(double dd)
{
	d = new double(dd);
}

My_class::My_class(const My_class &other)
{
	std::cout << "My_class::copy_constructor()...\n";
	d = new double(*other.d);
}

My_class::~My_class()
{
	std::cout << "~My_class()::*d = " << *d << std::endl;
	*d = -1;
	delete d;
	d = nullptr;
}

void func(My_class arg)
{
	std::cout << "inside func()...\n";
}

int main()
{
	My_class obj1(42.42);
	std::cout << "before func()...\n";
	func(obj1);
}