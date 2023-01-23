#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
class StringVector : public vector<void *>
{
public:
	void push_back(T *s) { vector<void *>::push_back(s); }
	T* operator[](int index) { return (T *)vector<void *>::operator[](index); }
};

int main()
{
	StringVector<string> v;
	v.push_back(new string("hello"));
	cout << *v[0] << endl;
}