#include <iostream>
using namespace std;

struct S
{
public:
    void print_pub();
private:
    void print_priv();
protected:
    void print_protec();
};

void S::print_pub()
{
    cout << "print_pub() called...." << endl;
}

void S::print_priv()
{
    cout << "print_priv() called...." << endl;
}

void S::print_protec()
{
    cout << "print_protec() called...." << endl;
}

int main()
{
    S s;
    s.print_pub();
    s.print_priv();
    s.print_protec();
}
