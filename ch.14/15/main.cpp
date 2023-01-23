#include <iostream>
using namespace std;

class C1
{
public:
	static void foo1() { cout << "C1::foo1()\n"; }
	static void foo2() { cout << "C1::foo2()\n"; }
};

class C2 : public C1
{
public:
	static void foo1(string) { cout << "C2::foo1()\n"; }
};

int main()
{
	C2::foo1("hello");
	C2::foo2();
}