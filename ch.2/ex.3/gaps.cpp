#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Input file name: \n";
	string file_name;
	cin >> file_name;
	ifstream in(file_name);
	int count = 0;
	while (in >> file_name)
	{
		++count;
	}
	cout << "Number of words: " << count << endl;
}

//comment