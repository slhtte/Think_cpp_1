#include <iostream>
using namespace std;

void print(double *p, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "arr[" << i << "] = " << p[i] << endl;
    }
    cout << endl;
}

int main()
{
    double arr[] = { 0, 0, 0, 0, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr, size);

    unsigned char *c = reinterpret_cast<unsigned char *>(arr);
    for (int i = 0; i < sizeof(arr); ++i)
    {
        c[i] = 1;
    }

    print(arr, size);
}
