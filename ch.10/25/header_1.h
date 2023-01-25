#ifndef _HEADER_1_H_
#define _HEADER_1_H_

#include <string>
#include <iostream>

class C
{
	std::string str;
public:
	C(std::string s = "") : str(s) {}
	void print() const
	{
		std::cout << "C::str = " << str << std::endl;
	}
};

#endif