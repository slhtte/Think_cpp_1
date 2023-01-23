#include <iostream>
#include <string>
using namespace std;

void str_ptr(string *s)
{
	*s += " str_ptr added PTR"; 
}

void str_ref(string &s)
{
	s += " str_ref added REF";
}

int main()
{
	string s = "Empty str";
	cout << s << endl;

	str_ptr(&s);
	cout << s << endl;

	str_ref(s);
	cout << s << endl;
}