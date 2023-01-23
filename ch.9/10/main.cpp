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
	Hue hue() const { return h; }
	void hue(Hue hh) { h = hh; }
};

int main()
{
	Color c;
	c.hue(yellow);

	Hue h = c.hue();
}