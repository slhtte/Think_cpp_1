#include "header2.h"
#include <iostream>

namespace My = my_nmsp;

namespace my_nmsp
{
	void f1()
	{
		std::cout << "call my_nmsp::f1()...\n";
	}

	void f2()
	{
		std::cout << "call my_nmsp::f2()...\n";
	}
}

void m_f1()
{
	My::f1();
}

void m_f2()
{
	using namespace My;
	f2();
}

int main()
{
	m_f1();
	m_f2();
}