#include <iostream>
using namespace std;

#define TRACE(s) cerr << #s << endl, s

void f(int i)
{
	cout << i + 1 << endl;
}

int main()
{
	for (int count = 0; count < 100; ++count)
		TRACE(f(count));
}