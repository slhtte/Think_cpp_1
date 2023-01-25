#include "Bird.h"
using namespace std;

class BirdHouse
{
	Bird b_obj;
	Bird *b_ptr;
	Bird &b_ref;

	BirdHouse(const BirdHouse &right);
	BirdHouse& operator=(const BirdHouse &right);

public:
	BirdHouse(const Bird &obj, Bird *ptr, Bird &ref)
	: b_obj(obj), b_ptr(ptr), b_ref(ref) {}

	friend ostream& operator<<(ostream &os, const BirdHouse &bh)
	{
		os << "obj: " << bh.b_obj << '\t' << "ptr: " << *bh.b_ptr << '\t'
		   << "ref: " << bh.b_ref;

		return os;
	}

};

int main()
{
	Bird b1;
	Bird b2;
	Bird b3(b2);

	BirdHouse bh(b1, &b2, b3);

	cout << bh << endl;

	b3 = b2 = b1;
	cout << bh << endl;
}