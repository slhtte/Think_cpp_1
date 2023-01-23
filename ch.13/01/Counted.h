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
};

#endif