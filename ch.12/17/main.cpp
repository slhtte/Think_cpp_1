#include "BirdHouse.h"
using namespace std;

int main()
{
	Bird b0, b1(1), b2(2);
	BirdHouse bh(b0, &b1, b2, 3);

	b2 = b1 * b0;

	cout << bh << endl;

	b2 = b1 + b0;

	cout << bh << endl;

	BirdHouse bhq(b0, &b1, b2, 4);

	cout << bhq - bh << endl;
}