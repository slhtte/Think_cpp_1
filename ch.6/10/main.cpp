#include <iostream>
using namespace std;

class C
{
    int i;
public:
    C(int ii);
};

C::C(int ii)
{
    i = ii;
}

int main()
{
   C c1;
   C c2;
   C c3;
}
