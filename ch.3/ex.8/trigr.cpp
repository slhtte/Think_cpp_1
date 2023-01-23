#include <iostream>
#include <string>
using namespace std;


int main()
{
	unsigned int a = 0, b = 2, c = 3, d = 0;
	d = a and b;
	cout << "a and b is    " << d << endl;
	d = a or b;
	cout << "a or  b is    " << d << endl;
	d = not a;
	cout << "not a is      " << d   << endl;
	d = a not_eq b;
	cout << "a not_eq b is " << d << endl;
	d = c bitand b;
	cout << "a bitand b is " << d << endl;
	d = c and_eq b;
	cout << "a and_eq b is " << d << endl;
	d = a bitor c;
	cout << "a bitor  c is " << d << endl;
	d = a or_eq c;
	cout << "a or_eq  c is " << d << endl;
	d = b xor c;
	cout << "b xor    c is " << d << endl;
	d  = b xor_eq c;
	cout << "b xor_eq c is " << d << endl;
	d = compl b;
	cout << "compl b    is " << d    << endl;
}