#include <iostream>
using namespace std;

class C
{
	long l;
public:
	C() : l(123456789)
	{
		cout << "C::C(), l = " << l << endl;
	}
};

int main()
{
	C c;
}