#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<float> v(25);
	for (int i = 0; i < v.size(); ++i)
	{
		v[i] = i + i * 0.1;
		cout << "v[" << i << "] = " << v[i] << endl;
	}
}