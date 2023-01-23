#include <iostream>
using namespace std;

class Base
{
	int i = 47;
	char c = 'A';
public:
	virtual ~Base() {}
};

int main()
{
	Base *b = new Base;
	void *p = reinterpret_cast<void *>(b);

	int *pi = reinterpret_cast<int *>(p + sizeof(void *));
	cout << "*pi = " << *pi << endl;

	char *pc = reinterpret_cast<char *>(p + sizeof(void *) + sizeof(int));
	cout << "*pc = " << *pc << endl;
}