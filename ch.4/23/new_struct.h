#ifndef NEW_STRUCT_H
#define NEW_STRUCT_H

#include "Stack.h"
#include "CppLib.h"
#include <string>

struct New_struct
{
    Stack stack;
    Stack reverse_stack;
    Stash *stash;

    void push(std::string file_name);
    void print();
};

#endif
