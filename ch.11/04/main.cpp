#include <iostream>

int &func(int *arg)
{
	++(*arg);

	return *arg;
}

int main()
{
	int i = 42;
	func(&i) = 5;

	std::cout << i << std::endl;
}