#include <iostream>
using namespace std;

class My_int
{
	int i;
public:
	My_int(int ii = 0) : i(ii) {}

	My_int& operator++(int i)
	{
		cout <<"int i = " << i << endl;

		++i;

		return *this;
	}

	int get() const { return i; }
};

int main()
{
	My_int m(42);

	//++m;
	m++;
}