#include <iostream>
#include "../../require.h"
using namespace std;

class Number
{
	double d;
public:
	Number(double dd = 0) : d(dd) {}

	const Number operator+(const Number &right) const
	{
		return Number(d + right.d);
	}

	const Number operator-(const Number &right) const
	{
		return Number(d - right.d);
	}

	const Number operator*(const Number &right) const
	{
		return Number(d * right.d);
	}

	const Number operator/(const Number &right) const
	{
		require(right.d != 0, "divide by zero");
		return Number(d / right.d);
	}

	Number& operator=(const Number &right)
	{
		if (this == &right)
		{
			return *this;
		}

		d = right.d;
		return *this;
	}

	operator double() const { return d; }

	friend ostream& operator<<(ostream &os, const Number &n)
	{
		os << "Number::d = " << n.d << endl;
		return os;
	}
};

int main()
{
	Number n1(1.1);
	Number n2(2.2);
	Number n3;

	n3 = n1 + n2 * n1 - n2 / n1;

	cout << n3;

	n3 = 2.2 + n1;
	cout << n3;
}