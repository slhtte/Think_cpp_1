#include <iostream>
#include "CppLib.h"
using namespace std;

int main()
{
    Stash stash;
    stash.initialize(sizeof(double));
    double x = 1.1;
    for (int i = 1; i <= 25; ++i)
    {
        stash.add(&x);
	x += 1.1;
    }

    for (int i = 0; i < stash.count(); ++i)
    {
        cout << *(double *)stash.fetch(i) << endl;
    }

    stash.cleanup();
}
