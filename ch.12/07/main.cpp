#include <iostream>
using namespace std;

class My_int
{
	int i;
public:
	My_int(int ii = 0) : i(ii) {}

	friend const My_int operator+(const My_int &left, const My_int &right);
	friend const My_int operator-(const My_int &left, const My_int &right);

	void print(ostream &os) const
	{
		os << "My_int::i = " << i << endl;
	}
};

const My_int operator+(const My_int &left, const My_int &right)
{
	return My_int(left.i + right.i);
}

const My_int operator-(const My_int &left, const My_int &right)
{
	return My_int(left.i - right.i);
}

int main()
{
	My_int m1(42);
	My_int m2(24);
	My_int m3;

	m3 = m1 + m2;
	m3.print(cout);

	m3 = m1 + 1;
	m3.print(cout);

	m3 = m1 + m2 - 6;
	m3.print(cout);

	m3 = 1 + m1;
	m3.print(cout);
}