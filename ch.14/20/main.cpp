#include <iostream>
using namespace std;

class SpaceShip
{
public:
	void fly() const { cout << "SpaceShip::fly()...\n"; }
};

class Shuttle : public SpaceShip
{
public:
	void land() const { cout << "Shuttle::land()...\n"; }
};

int main()
{
	SpaceShip *ship = new Shuttle;
	ship->land();
}