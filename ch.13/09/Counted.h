#ifndef _COUNTED_H_
#define _COUNTED_H_

#include <iostream>

class Counted
{
	int id;
	static int count;
public:
	Counted() : id(count++)
	{
		std::cout << "Counted(), id  = " << id << std::endl;
	}

	~Counted()
	{
		std::cout << "~Counted(), id = " << id << std::endl;
	}

	friend std::ostream& operator<<(std::ostream &os, const Counted &c)
	{
		return os << c.id;
	}

	void f()
	{
		std::cout << "f() for id = " << id << std::endl;
	}
};

#endif