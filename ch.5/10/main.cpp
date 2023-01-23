#include <iostream>
#include "Stash.h"
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
    void print();
    void set(int x);
};

void Hen::display()
{
    cout << "Hen::display()...\n";
}

void Hen::print()
{
    cout << "Hen_" << n << endl;
}

void Hen::set(int x)
{
    n = x;
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
    Stash stash;
    
    stash.initialize(sizeof(Hen));
    for (int i = 0; i < 5; ++i)
    {
        Hen *hen = new Hen;
        hen->set(i);
        stash.add(hen);
    }

    for (int i = 0; i < stash.count(); ++i)
    {
        Hen *hen = (Hen *)stash.fetch(i);
        hen->print();
    }

    stash.cleanup();
}
