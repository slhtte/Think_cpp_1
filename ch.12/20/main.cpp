#include <iostream>
using namespace std;

class My_class
{
public:
	My_class() {}

	friend My_class& operator=(My_class &left, const My_class &right);
};

My_class& operator=(My_class &left, const My_class &right)
{
	return left;
}

int main()
{
	My_class c1;
	My_class c2;
	c2 = c1;
}