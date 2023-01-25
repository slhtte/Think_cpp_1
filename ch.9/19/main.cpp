#include <iostream>
#include <string>
using namespace std;

#define FIELD(s) \
private:         \
string s = #s;   \
public:          \
string get_##s() const { return s; } \
void   set_##s(string ss) { s = ss; }

class Record
{
	FIELD(one);
	FIELD(two);
};

int main()
{
	Record r;
	r.set_one("three");
	r.set_two("four");
	cout << r.get_one() << endl;
	cout << r.get_two() << endl;
}