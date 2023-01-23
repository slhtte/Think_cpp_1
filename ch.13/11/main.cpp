#include "My_class.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "new My_class:\n";
	My_class *m = new My_class;
	cout << "\n delete My_class:\n";
	delete m;

	cout << "\n new My_class[]:\n";
	My_class *a = new My_class[5];
	cout << "\n delete My_class[]:\n";
	delete []a;
}