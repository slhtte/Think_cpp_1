#include <iostream>
#include <string>
#include "Stack3.h"
using namespace std;

int main()
{
    string arr[] = { "Cat", "likes", "dog", "and", "dog", "likes", "cat." };
    Stack stack;
    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i)
    {
        stack.push(new string(arr[i]));
    }

    string *s;
    while ((s = (string *)stack.pop()) != 0)
    {
        cout << *s << endl;
	delete s;
    }
} 
