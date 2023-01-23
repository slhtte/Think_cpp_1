#include <iostream>
#include <vector>
using namespace std;

class Rock
{
public:
	Rock() { cout << "Rock()\n"; }
	Rock(const Rock &right) { cout << "Rock(const Rock&)\n"; }
	Rock& operator=(const Rock &right) { cout << "Rock::operator=(const Rock&)\n"; }
	~Rock() { cout << "~Rock()\n"; }
};

int main()
{
	vector<const Rock &> v;
}