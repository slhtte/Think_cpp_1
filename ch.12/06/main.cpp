#include <iostream>
using namespace std;

class My_int
{
	int i;
public:
	My_int(int ii = 0) : i(ii) {}

	const My_int operator+(const My_int &other) const
	{
		return My_int(i + other.i);
	}

	My_int& operator++()
	{
		++i;
		return *this;
	}

	const My_int operator++(int)
	{
		My_int before(i);
		++i;
		return before;
	}

	My_int& operator--()
	{
		--i;
		return *this;
	}

	const My_int operator--(int)
	{
		My_int before(i);
		--i;
		return before;
	}

	friend ostream& operator<<(ostream& os, const My_int &m);
};

ostream& operator<<(ostream& os, const My_int &m)
{
	os << "My_int::i = " << m.i << endl;
	return os;
}

int main()
{
	My_int m1(42);
	My_int m2(24);
	My_int m3;

	m3 = m1 + m2;
	cout << m3;

	m3 = m1 + 1;
	cout << m3;

	cout << ++m1;
	cout << --m1;

	cout << m1++;
	cout << m1--;
	cout << m1 << "end of input\n";

	//m3 = 1 + m1;
	//m3.print(cout);
}