#include <iostream>
using namespace std;

class Hen
{
public:
    class Nest
    {
    int x;
    
    public:
        friend class Hen;
        class Egg
        {
        int x;

        public:
            friend class Nest;
            void display();
        };
        void display();
        void f(Egg *e, int xx);
    };
    void display();
    void f(Nest *n, int xx);
};

void Hen::display()
{
    cout << "Hen::display()...\n";
}

void Hen::f(Nest *n, int xx)
{
    n->x = xx;
    cout << "Hen::f() called, n.x = " << n->x << endl;
}

void Hen::Nest::display()
{
    cout << "Hen::Nest::display()...\n";
}

void Hen::Nest::f(Egg *e, int xx)
{
    e->x = xx;
    cout << "Hen::Nest::f() called, e.x = " << e->x << endl;
}

void Hen::Nest::Egg::display()
{
    cout << "Hen::Nest::Egg::display()...\n";
}

int main()
{
    Hen hen;
    Hen::Nest nest;
    Hen::Nest::Egg egg;

    hen.display();
    nest.display();
    egg.display();

    hen.f(&nest, 15);
    nest.f(&egg, 49);
}
