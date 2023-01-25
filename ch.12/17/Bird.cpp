#include "Bird.h"

int Bird::i = 0;

const Bird operator+(const Bird &left, const Bird &right)
{
	Bird tmp(left);
	tmp.d += right.d;
	return tmp;
}

const Bird operator-(const Bird &left, const Bird &right)
{
	Bird tmp(left);
	tmp.d -= right.d;
	return tmp;
}

const Bird operator*(const Bird &left, const Bird &right)
{
	Bird tmp(left);
	tmp.d *= right.d;
	return tmp;
}

const Bird operator/(const Bird &left, const Bird &right)
{
	require(right.d != 0, "divide by zero");

	Bird tmp(left);
	tmp.d /= right.d;
	return tmp;
}