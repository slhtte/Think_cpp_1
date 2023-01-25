#include <iostream>
using namespace std;

class C1
{
	int i;
public:
	C1(int ii = 0) : i(ii)
	{
		cout << "C1::C1(int)\n";
	}

	friend const C1 operator+(const C1& left, const C1& right);
};

const C1 operator+(const C1& left, const C1& right)
{
	return C1(left.i + right.i);
}

class C2
{
	int i;
public:
	C2(int ii = 0) : i(ii)
	{
		cout << "C2::C2(int)\n";
	}

	operator C1() const
	{
		return C1(i);
	}
};

int main()
{
	C1 c1(1);
	C2 c2(2);

	c1 + c2;
}