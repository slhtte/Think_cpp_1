#include <iostream>
#include <string>
using namespace std;

class Lib
{
    string s[3];

public:
    void set_a(string aa) { s[0] = aa; }
    void set_b(string bb) { s[1] = bb; }
    void set_c(string cc) { s[2] = cc; }

    string get_a() { return s[0]; }
    string get_b() { return s[1]; }
    string get_c() { return s[2]; }
};

int main()
{
    Lib lib;
    lib.set_a("lib.a");
    lib.set_b("lib.b");
    lib.set_c("lib.c");

    cout << lib.get_a() << endl
         << lib.get_b() << endl
         << lib.get_c() << endl;
}
