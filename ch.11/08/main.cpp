#include <iostream>

void f(char &arg)
{
	arg = 'b';
}

int main()
{
	char c = 'a';
	f(c);

	std::cout << c << std::endl;
}