#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	vector<float> v(25);

	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = i + i * 0.1;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = v[i] * v[i];
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << "v[" << i << "] = " << sqrt(v[i]) << endl;
	}

	cout << endl;

	for (int i = 0; i < v.size(); ++i)
	{
		cout << "v[" << i << "] = " << v[i] << endl;
	}
}