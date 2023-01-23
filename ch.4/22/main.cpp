#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "CppLib.h"
using namespace std;

int main()
{
    Stack stack;
    stack.initialize();

    const int buffer = 80;
    ifstream in("main.cpp");
    string line;
    int count = 1;
    Stash *stash = new Stash;
    stash->initialize(sizeof(char) * buffer);
    
    while (getline(in, line))
    {
        if (count++ == 5)
        {
            stack.push(stash);
            stash = new Stash;
            stash->initialize(sizeof(char) * buffer);
            count = 1;
        }

        stash->add(line.c_str());
    }

    Stack reverse_stack;
    reverse_stack.initialize();
    while (stash = (Stash *)stack.pop())
    {
        reverse_stack.push(stash); 
    }
    stack.cleanup();

    while (stash = (Stash *)reverse_stack.pop())
    {
        int k = 0;
        char *c;
        while (c = (char *)stash->fetch(k++))
        {
            cout << k << " " << c << endl;
        }
        stash->cleanup();        

        delete stash;
    }

    reverse_stack.cleanup();
}
