#include <cstddef>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class My_class
{
	static vector<string> v;
public:
	My_class() { cout << "My_class()...\n"; }

	void* operator new(size_t, const string &s)
	{
		v.push_back(s);
		return ::new char;
	}

	vector<string>& get() const
	{
		return v;
	}
};

vector<string> My_class::v = vector<string>();

int main()
{
	string s = __FILE__;
	My_class *p1 = new(s) My_class;
	s = __LINE__;
	My_class *p2 = new(s) My_class;

	for (int i = 0; i < p2->get().size(); ++i)
	{
		cout << p2->get()[i] << endl;
	} 
}