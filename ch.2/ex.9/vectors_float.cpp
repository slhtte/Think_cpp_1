#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int v_size = 25;
	vector<float> v1(v_size), v2(v_size), v3(v_size);
	for (int i = 0; i < v_size; ++i)
	{
		v1[i] = i + i * 0.1;
		v2[i] = i * 2 + i * 0.2;
		v3[i] = v1[i] + v2[i];
		cout << "v3[" << i << "] = " << v3[i] << endl;
	}
}