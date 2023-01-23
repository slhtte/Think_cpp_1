#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack stack;
    stack.initialize();
    double x = 1.1;
    for (int i = 0; i < 25; ++i)
    {
        stack.push(new double(x + i));
    }

    while (stack.peek())
    {
        cout << *(double *)stack.pop() << endl;
    }

    stack.cleanup();
}
