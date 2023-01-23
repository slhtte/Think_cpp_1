#ifndef STACK_OF_INT_H
#define STACK_OF_INT_H

class stack_of_int
{
    class stack_imp;
    stack_imp *impl;
public:
    void initialize();
    void cleanup();
    void add(int x);
    void change(int i, int val);
    int get(int i);
};

#endif
