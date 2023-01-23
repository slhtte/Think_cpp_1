#include <iostream>
using namespace std;

int main()
{
	int X = 1, Y = 2, Z = 3;

	float result_1 = X + Y - 2/2 + Z;
	float result_2 = X + (Y - 2)/(2 + Z);

	cout << "result_1 = " << result_1 << endl;
	cout << "result_2 = " << result_2 << endl;
}