#ifndef _MIRROR_H_
#define _MIRROR_H_

#include <iostream>

class Mirror
{
	Mirror *ptr;
	bool state;
	int counter;

public:
	Mirror(int i = 0) : ptr(nullptr), state(true), counter(i) {}
	Mirror(Mirror *other, int i = 0) : ptr(other), state(false), counter(i) {}

	bool test()
	{
		std::cout << "call Mirror_" << counter << "::test()" << std::endl;

		if (ptr) return ptr->test();
		else return state;
	}
};

#endif