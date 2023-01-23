#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Input file_name and word for search: \n";
	string file_name, word;
	cin >> file_name >> word;
	ifstream in(file_name);
	int count = 0;

	while (in >> file_name)
	{
		if (file_name == word)
		{
			++count;
		}
	}

	cout << "Number matches with word: " << count << endl;
}