#include <iostream>
#include <cstdlib>
using namespace std;

class C
{
public:
	C() {}
	~C()
	{
		cout << "destrcutor C...\n";
		exit(1);
	}
};

C c;

int main()
{
	cout << "inside main()...\n";
}