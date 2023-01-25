#include <iostream>
using namespace std;

class Class_1
{
public:
	Class_1() { cout << "Class_1::constructor()\n"; }
	Class_1(const Class_1 &other) { cout << "Class_1::copy_constructor()\n"; }
};

class Class_2
{
	Class_1 c1;
public:
	Class_2() { cout << "Class_2::constructor()\n"; }
};

void func(Class_2 c2)
{
	cout << "inside func()\n";
}

int main()
{
	Class_2 c2;
	cout << "before func()\n";
	func(c2);
}