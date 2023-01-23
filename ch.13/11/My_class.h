#ifndef _MY_CLASS_H_
#define _MY_CLASS_H_

#include <iostream>

class My_class
{
	int i = 0;
public:
	My_class()
	{
		std::cout << "*";
	}
	~My_class()
	{
		std::cout << "~";
	}
	void* operator new(size_t sz)
	{
		std::cout << "My_class::new: " << sz << "bytes\n";

		return ::new unsigned char[sz];
	}

	void operator delete(void *p)
	{
		std::cout << "My_class::delete\n";

		::delete p;
	}

	void* operator new[](size_t sz)
	{
		std::cout << "My_class::new[]: " << sz << "bytes\n";

		return ::new unsigned char[sz];
	}

	void operator delete[](void *p)
	{
		std::cout << "My_class::delete[]\n";

		::delete []p;
	}
};

#endif