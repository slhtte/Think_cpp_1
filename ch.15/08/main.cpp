#include <iostream>
#include <vector>
using namespace std;

class Rodent
{
public:
	virtual void run() const = 0;
	virtual ~Rodent() { cout << "~Rodent()\n"; }
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
	public:
	void run() const { cout << "Hamster::run()\n"; }
};

class BlueHamster : public Hamster
{
public:
	void run() const { cout <<"BlueHamster::run()\n"; }
};

int main()
{
	vector<Rodent *> v = { new Mouse, new Gerbil, new Hamster, new BlueHamster };

	for (int i = 0; i < v.size(); ++i)
	{
		v[i]->run();
		delete v[i];
	}
}