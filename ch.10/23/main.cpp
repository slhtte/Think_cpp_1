#include "header_1.h"
#include "header_2.h"
using namespace h_1;
using namespace h_2;

void func_1()
{
    using h_1::C;
    C c;
	c.print();
}

void func_2()
{
	using h_2::C;
	C c;
	c.print();
}

int main()
{
	func_1();
	func_2();
}