#include "PStash.h"
#include "Counted.h"
#include <iostream>
using namespace std;

int main()
{
	PStash stash;

	for (int i = 0; i < 5; ++i)
	{
		stash.add(new Counted);
	}

	for (int i = 0; i < stash.count(); ++i)
	{
		cout << "stash[" << i << "] = " << *(Counted *)stash[i] << endl;
	}

	for (int i = 0; i < stash.count() - 1; ++i)
	{
		delete (Counted *)stash.remove(i);
	}

	cout << "before {...\n";
} 