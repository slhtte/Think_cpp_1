#include <iostream>
using namespace std;

enum Hue
{
	red,
	blue,
	yellow
};

class Color
{
	Hue h;
public:
	Color(Hue hh = red) : h(hh) {}
	Hue get() const { return h; }
	void set(Hue hh) { h = hh; }
};

int main()
{
	Color c;
	c.set(yellow);

	Hue h = c.get();
}