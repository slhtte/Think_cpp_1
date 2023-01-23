#ifndef _MY_STRING_
#define _MY_STRING_

#include <string>

class MyString
{
	std::string s;
public:
	MyString(const char ss[]);
	MyString();
	std::string print() const;
};

#endif