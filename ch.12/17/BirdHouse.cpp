#include "BirdHouse.h"

const BirdHouse operator+(const BirdHouse &left, const BirdHouse &right)
{
	BirdHouse tmp(left.b_obj, left.b_ptr, left.b_ref, left.d);
	tmp.d += right.d;
	return tmp;
}

const BirdHouse operator-(const BirdHouse &left, const BirdHouse &right)
{
	BirdHouse tmp(left.b_obj, left.b_ptr, left.b_ref, left.d);
	tmp.d -= right.d;
	return tmp;
}

const BirdHouse operator*(const BirdHouse &left, const BirdHouse &right)
{
	BirdHouse tmp(left.b_obj, left.b_ptr, left.b_ref, left.d);
	tmp.d *= right.d;
	return tmp;
}

const BirdHouse operator/(const BirdHouse &left, const BirdHouse &right)
{
	require(right.d != 0, "divide by zero");

	BirdHouse tmp(left.b_obj, left.b_ptr, left.b_ref, left.d);
	tmp.d *= right.d;
	return tmp;
}