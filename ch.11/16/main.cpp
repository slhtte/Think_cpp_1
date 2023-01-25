#include <iostream>
using namespace std;

class My_class
{
public:
	My_class() { cout << "My_class::constructor()...\n"; }
	My_class(const My_class &other) { cout << "My_class::copy_constryctor()\n"; }
};

My_class func1()
{
	cout << "inside func1()\n";
	My_class obj;
	return obj;
}

int main()
{

	My_class obj = func1();
}