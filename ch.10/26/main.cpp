#include <iostream>
using namespace std;

class C
{
	static double st_d;
	static long   st_l;
public:
	static double get_d() { return st_d; }
	static long   get_l() { return st_l; }
};

double C::st_d = 1.2;
long   C::st_l = 42;

int main()
{
	C c;

	cout << "C::st_d = " << c.get_d() << endl;
	cout << "C::st_l = " << c.get_l() << endl;
}