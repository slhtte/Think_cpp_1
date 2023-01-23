#include <vector>
#include <iostream>
#include "Counted.h"
using namespace std;

int main()
{
	vector<Counted *> v;

	for (int i = 0; i < 5; ++i)
	{
		v.push_back(new Counted);
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << "v[" << i << "] = " << *v[i] << endl;
		v[i]->f();
	}

	for (int i = 0; i < v.size(); ++i)
	{
		delete v[i];
	}
}