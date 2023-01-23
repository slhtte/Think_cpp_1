#include "Counted.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "before new...\n";
	Counted *c = new Counted;
	cout << "after new...\n";
	delete c;

	cout << "before new[]...\n";
	Counted *arr = new Counted[5];
	cout << "after new[]...\n";
	delete []arr;
}