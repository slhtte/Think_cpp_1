#include <iostream>
using namespace std;

int main()
{
    double arr1[5] = { 1.1, 2.2, 3.3 };
    for (int i = 0; i < sizeof(arr1) / sizeof(*arr1); ++i)
    {
        cout << "arr1[" << i << "] = " << arr1[i] << endl;
    }
    cout << endl;

    double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    for (int i = 0; i < sizeof(arr2) / sizeof(*arr2); ++i)
    {
        cout << "arr2[" << i << "] = " << arr2[i] << endl;
    }
    cout << endl;
}
