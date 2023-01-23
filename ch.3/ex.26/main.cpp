#include <iostream>
using namespace std;

void f(void *p, int len, int val)
{
    int *p_i = static_cast<int *>(p);

    for (int i = 0; i < len; ++i)
    {
    	p_i[i] = val;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    void *arr_v = static_cast<void *>(arr);
    int size = sizeof(arr) / sizeof(arr[0]);
    f(arr_v, size, 7);
    
    for (int i = 0; i < size; ++i)
    {
    	cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    cout << endl;
}
