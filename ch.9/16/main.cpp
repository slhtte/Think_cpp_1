#include <iostream>
#include <string>
using namespace std;

#define DEBUG(x) cout << x << endl;

int main(int argc, char const *argv[])
{
	string s = argv[1];

	while (!s.empty())
	{
		string tmp = "";

		for (int i = 0; i < s.size() - 1; ++i)
		{
			tmp += s[i];
		}

		s = tmp;

		DEBUG(s);
	}
}
