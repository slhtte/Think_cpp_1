#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString(const char ss[]) : s(ss) {}

MyString::MyString() : s("") {}

string MyString::print() const
{
	return s;
}