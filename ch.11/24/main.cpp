#include <iostream>
using namespace std;

class My_class
{

	double d;
	public:
	void print() const
	{
		cout << "My_class::d = " << d << endl;
	}
};

int main()
{
	double My_class::*ptr_d = &My_class::d;
	void (My_class::*ptr_print)() const = &My_class::print;

	My_class obj, *ptr_obj;
	ptr_obj = &obj;
	obj.*ptr_d = 1.1;
	(obj.*ptr_print)();

	ptr_obj->*ptr_d = 2.2;
	(ptr_obj->*ptr_print)();
}