#ifndef _BIRDHOUSE_H_
#define _BIRDHOUSE_H_

#include "Bird.h"

class BirdHouse
{
	Bird b_obj;
	Bird *b_ptr;
	Bird &b_ref;
	int d;

	BirdHouse(const BirdHouse &right);
	BirdHouse& operator=(const BirdHouse &right);

public:
	BirdHouse(const Bird &obj, Bird *ptr, Bird &ref, int dd = 0)
	: b_obj(obj), b_ptr(ptr), b_ref(ref), d(dd) {}

	friend const BirdHouse operator+(const BirdHouse &left, const BirdHouse &right);
	friend const BirdHouse operator-(const BirdHouse &left, const BirdHouse &right);
	friend const BirdHouse operator*(const BirdHouse &left, const BirdHouse &right);
	friend const BirdHouse operator/(const BirdHouse &left, const BirdHouse &right);


	friend std::ostream& operator<<(std::ostream &os, const BirdHouse &bh)
	{
		os << "obj: " << bh.b_obj << '\t' << "ptr: " << *bh.b_ptr << '\t'
		   << "ref: " << bh.b_ref << '\t' << "BirdHouse::d = " << bh.d;

		return os;
	}

};

#endif