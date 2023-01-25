#include <iostream>
#include <string>
using namespace std;

class My_class1
{
	string s;
public:
	My_class1(string ss = "Hello") : s(ss) {}
	string get() const { return s; }
};

class My_class2
{
	My_class1 cl1;
public:
	My_class2(string ss = "World") : cl1(ss) {}
	string get() const { return cl1.get(); }
};

int main()
{
	My_class2 c1("fly");
	My_class2 c2;

	c2 = c1;

	cout << c2.get() << endl;
}