#include <iostream>

namespace Me
{
	class Us
	{
		int i = 42;

	public:
		friend int you(Us *u);
	};

int you(Us *u)
{
	return u->i;
}

}

int main()
{
	Me::Us u;
	std::cout << Me::you(&u) << std::endl;
}

