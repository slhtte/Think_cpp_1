#include <iostream>
using namespace std;

class My_class
{
	static const short SIZE = 5;
	int arr[SIZE] = { 1, 2, 3, 4, 5 };
public:
	int* get_arr() { return arr; }
};

int main()
{
	int* (My_class::*ptr_arr)() = &My_class::get_arr;
	My_class obj;

	cout << (obj.*ptr_arr)()[3] << endl;
}