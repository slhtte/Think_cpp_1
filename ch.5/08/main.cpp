#include <iostream>
using namespace std;

class My_class
{
    int x_priv;
protected:
    int x_prot;
public:
    int x_pub;
    void show_map();
};

void My_class::show_map()
{
    cout << "x_priv = " << x_priv << ", " << (long)&x_priv << endl
         << "x_prot = " << x_prot << ", " << (long)&x_prot << endl
         << "x_pub =  " << x_pub  << ", " << (long)&x_pub  << endl;
}

int main()
{
    My_class m;
    m.show_map();
}
