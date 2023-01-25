#include <iostream>

class C
{
	int c = 42;

public:
	void func_1() { ++c; }
	void func_2() const 
	{
		std::cout << "C::c = " << c << std::endl;
	}
};

const C &func(const C &arg)
{
	//arg.func_1();
	arg.func_2();

	return arg;
}

int main()
{
	C c;
	const C &ptr = c;

	func(ptr);
}