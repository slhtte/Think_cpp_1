#include <iostream>
using namespace std;

class My_class
{
	static int counter;
	int number;

public:
	My_class() 
	{ 
		number = counter;
		++counter; 
	}
	void print() const
	{
		cout << "My_class::number = "  << number << endl;
		cout << "My_class::counter = " << counter << endl;
	}
};

int My_class::counter = 0;

void print(const My_class &obj)
{
	obj.print();
}

int main()
{
    My_class obj1;
    print(obj1);

    My_class obj2;
    print(obj2);

    My_class obj3 = obj2;
    print(obj3);
}