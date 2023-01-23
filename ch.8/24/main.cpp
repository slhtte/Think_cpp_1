#include <iostream>
using namespace std;

class S
{
	int i;
public:
	S();
	void incr();
	int f();
	int cf() const;
};

S::S() : i(4) {}

void S::incr()
{
	++i;
}

int S::f()
{
	return i;
}

int S::cf() const
{
	incr();
	return i;
}

int main()
{
	S s;
	const S cs;

	s.incr();
	int i = s.f();
	int ii = s.cf();

	//cs.incr();
	//int ci = cs.f();
	int cii = cs.cf();
}