#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

class Bird
{
	std::string s;
	static int i;
public:
	Bird()
	{
		std::cout << "construct Bird#" << std::to_string(i) << std::endl;
		s = "Bird#" + std::to_string(i++);
	}

	Bird(const Bird &right)
	{
		std::cout << "copy_constructor from " << right << std::endl;
		s = right.s + "_copy";
		++i;
	}

	Bird& operator=(const Bird &right)
	{
		std::cout << "call operator= for " << *this << " to " << right << std::endl;

		if (this != &right)
		{
		    s = right.s;
		}

		return *this;
	}

	friend std::ostream& operator<<(std::ostream &os, const Bird &b)
	{
		os << b.s;
		return os;
	}
};

#endif