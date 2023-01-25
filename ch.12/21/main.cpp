#include <iostream>
#include <string>
using namespace std;

class My_class
{
public:
	My_class() {}
	My_class& operator=(const My_class &right, string s = "op=call")
	{
		cout <<"My_class::operator=(const My_class&, string = " << s << ")\n";

		return *this;
	}

	void f(const My_class &right)
	{
		operator=(right);
	}
};

int main()
{
	My_class c1, c2;
	c1.f(c2);
}