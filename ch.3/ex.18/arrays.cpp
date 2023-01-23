#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
	cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

int main()
{
    int arr1[5] = { 1, 2, 3, 4, 5 };
    unsigned char c = '1';
    int arr2[5] = { 11, 12, 13, 14, 15};

    *arr2 = arr1[510];
    cout << "Print arr2:\n";
    print_array(arr2, 5);
}