#include <iostream>
#include <ctime>
using namespace std;

inline void f1()
{
	int *p = new int;
	delete p;
}

void f2()
{
	int *p = new int;
	delete p;
}

int main()
{
	int t1 = clock();
	for (int i = 0; i < 1024 * 1024; ++i)
	{
		f2();
	}
	int t2 = clock();

	cout << "t1 = " << t2 - t1 << endl;

	int t3 = clock();
	for (int i = 0; i < 1024 * 1024; ++i)
	{
		f1();
	}
	int t4 = clock();
	cout << "t2 = " << t4 - t3 << endl;
}