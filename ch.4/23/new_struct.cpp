#include "new_struct.h"
#include <iostream>
#include <fstream>

void New_struct::push(std::string file_name)
{
    using namespace std;

    stack.initialize();

    const int buffer = 80;
    ifstream in(file_name);
    string line;
    int count = 1;
    stash = new Stash;
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

    reverse_stack.initialize();
    while (stash = (Stash *)stack.pop())
    {
        reverse_stack.push(stash);
    }
    stack.cleanup();

}

void New_struct::print()
{
    using namespace std;

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
