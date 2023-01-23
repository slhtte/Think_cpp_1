#include <iostream>
using namespace std;
#define F(ARG) cout << #ARG " = " << (long)ARG << endl;

int main()
{
    int *x = new int;
    long *l = new long;
    char *c = new char[100];
    float *f = new float[100];

    F(x);
    F(l);
    F(c);
    F(f);

    delete x;
    delete l;
    delete []c;
    delete []f;
}
