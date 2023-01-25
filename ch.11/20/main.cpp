#include <iostream>
using namespace std;

class My_class
{
//	int i;
//public:
//	My_class() : i(42) {}
//	void print() { cout << i << endl; }
};

My_class func_1()
{
	My_class obj;
	return obj;
}

void func_2(const My_class &arg)
{
	cout << "inside func_2()\n";
//	arg.print();
}

int main()
{
	func_2(func_1());
}