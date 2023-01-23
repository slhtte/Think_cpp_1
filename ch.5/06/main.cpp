#include <iostream>
using namespace std;

class Hen
{
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
};

void Hen::display()
{
    cout << "Hen::display()...\n";
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
    Hen hen;
    Hen::Nest nest;
    Hen::Nest::Egg egg;

    hen.display();
    nest.display();
    egg.display();
}
