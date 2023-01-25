#include <iostream>
using namespace std;

class My_ptr
{
	int *p;
public:
	My_ptr(int i = 0) : p(new int(i)) {}
	long get() const { return (long)p; }

	My_ptr& operator=(const My_ptr &right)
	{
		if (this != &right)
		{
			delete p;
			p = new int(*right.p);
		}

		return *this;
	}
};

int main()
{
	My_ptr p1(1);
	My_ptr p2;

	cout << "p1 = " << p1.get() << endl;
	cout << "p2 = " << p2.get() << endl;

	p2 = p1;
	cout << "p1 = " << p1.get() << endl;
	cout << "p2 = " << p2.get() << endl;
}