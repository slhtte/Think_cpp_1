#include <iostream>
using namespace std;

class C1
{
public:
	C1() { cout << "C1::C1()...\n"; }
	~C1() { cout << "C1::~C1()...\n"; }
};

class C2 : public C1
{
public:
	C2() { cout << "C2::C2()...\n"; }
	~C2() { cout << "C2::~C2()...\n"; }
};

class C3 : public C2
{
public:
	C3() { cout << "C3::C3()...\n"; }
	~C3() { cout << "C3::~C3()...\n"; }
};

int main()
{
	C3 c3;
}