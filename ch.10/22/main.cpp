#include "header_1.h"
#include "header_2.h"
using namespace h_1;
using namespace h_2;

void func_1()
{
    h_1::C c;
	c.print();
}

void func_2()
{
	h_2::C c;
	c.print();
}

int main()
{
	func_1();
	func_2();
}