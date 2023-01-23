#include <iostream>
#include <vector>
#include <string>
using namespace std;

class StringVector : public vector<void *>
{
public:
	void push_back(void *s)
	{
		vector<void *>::push_back(s);
	}
	string* operator[](int i)
	{
		return vector<void *>::operator[](i);
	}
};

int main()
{
	StringVector v;
	v.push_back(new string("hello"));
	cout << *(v[0]) << endl;
}