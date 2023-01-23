#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream in("main.cpp");
	string input;
	while (in >> input)
	{
		cout << "Enter string: " << input << endl;

		if (input == "quit") break;

		int result = 0;

		// quit

		if (input == "one") result = 1;
		else if (input == "two") result = 2;
		else if (input == "five") result = 5;

		switch (result)
		{
			case 1: cout << "Your result is " << result << endl; break;
			case 2: cout << "Your result is " << result << endl; break;
			case 5: cout << "Your result is " << result << endl; break;
			default: cout << "Your input is wrong, try again....\n";
		}

	}

	cout << "exit...\n\n";
}