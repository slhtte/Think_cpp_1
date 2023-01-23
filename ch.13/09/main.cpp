#include "Counted.h"

int main()
{
	Counted *c = new Counted;
	void *v = c;

	delete v;
}