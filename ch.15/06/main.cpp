#include <iostream>
using namespace std;

class Rodent
{
public:
	virtual void run() const = 0;
};

class Mouse : public Rodent
{
public:
	void run() const { cout << "Mouse::run()\n"; }
};

class Gerbil : public Rodent
{
public:
	void run() const { cout << "Gerbil::run()\n"; }
};

class Hamster : public Rodent
{
	void run() const { cout << "Hamster::run()\n"; }
};

int main()
{
	Rodent *arr[] = { new Mouse, new Gerbil, new Hamster };

	for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i)
	{
		arr[i]->run();
		delete arr[i];
	}
}