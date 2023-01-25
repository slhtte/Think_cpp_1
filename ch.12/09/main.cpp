#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class My_char
{
	char c;
public:
	My_char(char cc = '0') : c(cc) {}

	friend ostream& operator<<(ostream& os, const My_char &cc);
	friend istream& operator>>(istream& is, My_char &cc);
};

ostream& operator<<(ostream &os, const My_char &cc)
{
	os << "My_char::c = " << cc.c << endl;
	return os;
}

istream& operator>>(istream &is, My_char &cc)
{
	is >> cc.c;
	return is;
}

int main()
{
	My_char c;
	cout << "input character:\n";
	cin >> c;
	cout << "was inputed: " << c;

	stringstream input("A");
	input >> c;
	cout << "input form stringstream: " << c;

	ifstream in("main.cpp");
	ofstream out("out");

	while(in >> c)
	{
		out << c;
	}
}