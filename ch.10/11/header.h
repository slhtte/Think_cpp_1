#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Class
{
	int i;

public:
	Class(int ii = 0) : i(ii) {}
	void print() const
	{
		std::cout << "Class::i = " << i << std::endl;
	}
};

#endif