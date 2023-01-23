#include <iostream>
using namespace std;

class S
{
    int x;

public:
    friend void set(S *s, int xx);
};

void set(S *s, int xx)
{
    s->x = xx;
}

int main()
{
    S s;
    set(&s, 5);
}
