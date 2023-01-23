#include "Counted.h"
#include "Stack4.h"
using namespace std;

int main()
{
	Stack stack;

	for (int i = 0; i < 5; ++i)
	{
		stack.push(new Counted);
	}

	Counted *c = NULL;

	while((c = (Counted *)stack.pop()) != 0)
	{
		cout << *c << endl;
		c->f();
		delete c;
	}
}