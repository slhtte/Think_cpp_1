#include <iostream>
#include <string>
using namespace std;

class Bird
{
	string s;
	static int i;
public:
	Bird()
	{
		cout << "construct Bird#" << to_string(i) << endl;
		s = "Bird#" + to_string(i++);
	}

	Bird(const Bird &right)
	{
		cout << "copy_constructor from " << right << endl;
		s = right.s + "_copy";
		++i;
	}

	Bird& operator=(const Bird &right)
	{
		cout << "call operator= for " << *this << " to " << right << endl;;

		if (this != &right)
		{
		    s = right.s;
		}

		return *this;
	}

	friend ostream& operator<<(ostream &os, const Bird &b)
	{
		os << b.s;
		return os;
	}
};

int Bird::i = 0;

int main()
{
	Bird b1;
	Bird b2(b1);
	Bird b3;
	b3 = b2;
}