#include "stack_of_int.h"
#include <iostream>
#include <vector>
using namespace std;

struct stack_of_int::stack_imp
{
    vector<long int> arr;
    int size;
};

void stack_of_int::initialize()
{
    impl = new stack_imp;
    impl->size = 5;
}

void stack_of_int::cleanup()
{
    impl->arr.clear();
    delete impl;
}

void stack_of_int::add(int x)
{
    if (impl->arr.size() >= 5)
    {
        cout << "array is full...\n";
        return;
    }

    impl->arr.push_back(x);
    return;
}

void stack_of_int::change(int i, int val)
{
    if (i >= impl->arr.size() || i < 0)
    {
        cout << "ooops, out of range...\n";
        return;
    }

    impl->arr[i] = val;
    return;
}

int stack_of_int::get(int i)
{
    if (i >= impl->arr.size() || i < 0)
    {
        cout << "ooops, out of range...\n";
        return 0;
    }

    return impl->arr[i];
}
