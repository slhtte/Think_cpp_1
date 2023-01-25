#include <iostream>
class Simple2
{
public:
	int f(float) const { return 1; }
	int f(bool, double) const { return 2; }

};

int (Simple2::*fp)(float) const;
int (Simple2::*fp2)(float) const = &Simple2::f;

int main()
{
	fp = &Simple2::f;

	int (Simple2::*fp3)(bool) const = &Simple2::f;
	Simple2 obj;
	int i = (obj.*fp3)(true);

	std::cout << i << std::endl;
}