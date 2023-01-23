#include "stack_of_int.h"
#include <iostream>
using namespace std;

struct stack_of_int::stack_imp
{
    int *arr;
    int size;
};

void stack_of_int::initialize()
{
    impl = new stack_imp;
    impl->arr = new int[5];
    impl->size = 0;
}

void stack_of_int::cleanup()
{
    delete []impl->arr;
    delete impl;
}

void stack_of_int::add(int x)
{
    if (impl->size == 5)
    {
        cout << "array is full...\n";
        return;
    }

    impl->arr[impl->size++] = x;
    return;
}

void stack_of_int::change(int i, int val)
{
    if (i >= impl->size || i < 0)
    {
        cout << "ooops, out of range...\n";
        return;
    }

    impl->arr[i] = val;
    return;
}

int stack_of_int::get(int i)
{
    if (i >= impl->size || i < 0)
    {
        cout << "ooops, out of range...\n";
        return 0;
    }
    
    return impl->arr[i];
}
