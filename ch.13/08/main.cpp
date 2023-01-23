#include "Counted.h"
#include <iostream>
using namespace std;

int main()
{
	Counted *arr = new Counted[5];
	delete arr;

	cout << "before {...\n";
}