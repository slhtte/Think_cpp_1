#include <iostream>
#include <cstdio>
using namespace std;

char* func(const char *arr, int size)
{
    char *result = new char[size];
    for (int i = 0; i < size; ++i)
    {
        result[i] = arr[i];
    }
    result[size] = '\0';

    return result;
}

int main()
{
    const char* arr = "hello";
    int size = 6;

    const char* p1 = func(arr, size);
    printf("p1 = %s\n", p1);
    const char *p2 = func(p1, size);
    printf("p2 = %s\n", p2);

    cout << "&p1 = " << (long)p1 << endl;
    cout << "&p2 = " << (long)p2 << endl;

    delete []p1;
    delete []p2;
}
