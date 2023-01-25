#include <iostream>
using namespace std;

class Orange
{};

class Apple
{
public:
	explicit Apple(Orange)
	{
		cout <<"Apple::Apple(Orange)\n";
	}
};

void func(Apple)
{
	cout << "func(Apple)\n";
}

int main()
{
	Orange o;
	func(Apple(o));
}