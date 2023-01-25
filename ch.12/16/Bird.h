#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>
#include "../../require.h"

class Bird
{
	std::string s;
	static int i;
	int d;
public:
	Bird(int dd = 0) : d(dd)
	{
		std::cout << "construct Bird#" << std::to_string(i) << std::endl;
		s = "Bird#" + std::to_string(i++);
	}

	Bird(const Bird &right)
	{
		std::cout << "copy_constructor from " << right << std::endl;
		s = right.s + "_copy";
		d = right.d;
		++i;
	}

	Bird& operator=(const Bird &right)
	{
		std::cout << "call operator= for " << *this << " to " << right << std::endl;

		if (this != &right)
		{
		    s = right.s;
		    d = right.d;
		}

		return *this;
	}

	const Bird operator+(const Bird &right) const
	{
		Bird tmp(*this);
		tmp.d += right.d;
		return tmp;
	}

	const Bird operator-(const Bird &right) const
	{
		Bird tmp(*this);
		tmp.d -= right.d;
		return tmp;
	}

	const Bird operator*(const Bird &right) const
	{
		Bird tmp(*this);
		tmp.d *= right.d;
		return tmp;
	}

	const Bird operator/(const Bird &right) const
	{
		require(right.d != 0, "divide by zero");
		
		Bird tmp(*this);
		tmp.d /= right.d;
		return tmp;
	}

	friend std::ostream& operator<<(std::ostream &os, const Bird &b)
	{
		os << b.s << " d = " << b.d;
		return os;
	}
};

#endif