#include <iostream>
#include "Stack2.h"
using namespace std;

class Hen
{
    int n;
public:
    class Nest
    {
    public:
        class Egg
        {
        public:
            void display();
        };
        void display();
    };
    void display();
    void set(int x);
    void print();
};

void Hen::display()
{
    cout << "Hen::display()...\n";
}

void Hen::set(int x)
{
    n = x;
}

void Hen::print()
{
    cout << "Hen_" << n << endl;
}

void Hen::Nest::display()
{
    cout << "Hen::Nest::display()...\n";
}

void Hen::Nest::Egg::display()
{
    cout << "Hen::Nest::Egg::display()...\n";
}

int main()
{
    Stack stack;
    stack.initialize();
    for (int i = 0; i < 5; ++i)
    {
        Hen *hen = new Hen;
        hen->set(i + 7);
        stack.push(hen);
    }

    Hen *hen;
    while ((hen = (Hen *)stack.pop()) != 0)
    {
        hen->print();
        delete hen;
    }

    stack.cleanup();
}
