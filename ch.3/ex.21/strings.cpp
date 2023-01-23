#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str_arr[5];

	for (int i = 0; i < 5; ++i)
	{
		str_arr[i] = "string_" + to_string(i);
		cout << "str_arr[" << i << "] = " << str_arr[i] << endl;
	}
}