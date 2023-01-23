#include <iostream>
using namespace std;
#define F(A) cout << "sizeof("#A")  = " << sizeof(A) << endl; 

int main()
{
    F(int);
    F(bool);
    F(double);
    F(char);
    F(float);
    F(short);
    F(long);
    F(long double);
}
