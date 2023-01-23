#include <iostream>
#include <string>
using namespace std;

void print(string name, double *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << name << "[" << i << "] = " << arr[i] << endl;
    }

    cout << endl;
}

void set(double *p, int size, double val)
{
    for (int i = 0; i < size; ++i)
    {
        p[i] = val + i + (i * 0.1);
    }
}

int main()
{
    const double arr_c[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    volatile double arr_v[] = { 6.6, 7.7, 8.8, 9.9, 10.1 };
    
    double *p = const_cast<double *>(arr_c);
    int size_arr_c = sizeof(arr_c) / sizeof(arr_c[0]);
    print("arr_c", p, size_arr_c);
    set(p, size_arr_c, 9);
    print("arr_c", p, size_arr_c);

    p = const_cast<double *>(arr_v);
    int size_arr_v = sizeof(arr_v) / sizeof(arr_v[0]);
    print("arr_v", p, size_arr_v);
    set(p, size_arr_v, 2);
    print("arr_v", p, size_arr_v);
}
