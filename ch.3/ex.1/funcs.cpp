#include "funcs.h"
#include <iostream>
#include <string>
using namespace std;

void func_v(int i, char c)
{
	cout << "called void func_v(int i, char c) with args " << i << " and " << c << ".\n\n";
}

char func_c(bool b, double d)
{
    string s = b ? "true" : "false";
    cout << "called char func_c(bool b, double d) with args " << s << " and " << d << ".\n\n";	
    return 'c';
}

int func_i(float f, int i)
{
	cout << "called int func_i(float f, int i) with args " << f << " and " << i << ".\n\n";
	return i;
}

float func_f(char c, double d)
{
	cout << "called float func_f(char c, double d) with args " << c << " and " << d << ".\n\n";
	return 1.1;
}