#include "stack_of_int.h"
#include <iostream>
using namespace std;

int main()
{
    stack_of_int stack;
    stack.initialize();
    for (int i = 0; i <= 7; ++i)
    {
        stack.add(i);
    }
    
    stack.change(8, 15);

    for (int i = 0; i <= 7; ++i)
    {
        stack.change(i, i + 9);
    }

    for (int i = 0; i <= 6; ++i)
    {
        cout << stack.get(i) << endl;
    }
}
