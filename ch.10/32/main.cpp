#include "Mirror.h"
#include <iostream>

extern Mirror glob_4;

Mirror glob_main(&glob_4, 5);

int main()
{
	std::cout << (int)glob_main.test() << std::endl; 
}