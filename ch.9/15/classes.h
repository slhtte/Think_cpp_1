#ifndef _CLASSES_H_
#define _CLASSES_H_
#include <iostream>

class A
{
public:
	A();
};

class B
{
	A a;
public:
	B();
};

A::A()
{
	std::cout << "called A()...\n";
}

B::B()
{
	std::cout << "called B()...\n";
}

#endif