#include "Shape.h"
#include "TPStash2.h"
#include "TStack2.h"
#include <iostream>
using namespace std;

int main()
{
	Stack<Shape> stack;
	stack.push(new Circle);
	stack.push(new Square);
	stack.push(new Line);

	PStash<Shape> stash;
	stash.add(new Circle);
	stash.add(new Square);
	stash.add(new Line);

	cout << "stack:\n";
	Stack<Shape>::iterator stack_start = stack.begin();
	Stack<Shape>::iterator stack_end   = stack.end();

	while (stack_start != stack_end)
	{
		stack_start.current()->draw();
		++stack_start;
	}

	cout << "====================\n";
	cout << "stash:\n";
	PStash<Shape>::iterator stash_start = stash.begin();
	PStash<Shape>::iterator stash_end   = stash.end();

	while (stash_start != stash_end)
	{
		stash_start.current()->draw();
		++stash_start;
	}
	cout << "====================\n";
}