#include <string>
#include <iostream>
using namespace std;

class Travel
{
	string s;
public:
	Travel(string ss) : s(ss) { cout << "Travel::Travel(string)\n"; }
	Travel(const Travel &t) : s(t.s) { cout << "Travel::Travel(const Travel&)\n"; }
	Travel& operator=(const Travel &right)
	{
		s = right.s;
		cout << "Travel::operator=(const Travel&)\n";
	}
};

class Pager
{
	string s;
public:
	Pager(string ss) : s(ss) { cout << "Pager::Pager(string)\n"; }
	Pager(const Pager &p) : s(p.s) { cout << "Pager::Pager(const Pager&)\n"; }
	Pager& operator=(const Pager &right)
	{
		s = right.s;
		cout << "Pager::operator=(const Pager&)\n";
	}
};

class BusinessTravel : public Travel
{
	Pager pager;
public:
	BusinessTravel() : Travel("travel"), pager("pager") { cout << "BusinessTravel()\n"; }
	BusinessTravel(string ss) : Travel(ss), pager(ss) { cout << "BusinessTravel(string)\n"; }
	BusinessTravel(const BusinessTravel &right) : Travel(right), pager(right.pager) { cout << "BusinessTravel(const BusinessTravel&)\n"; }
    BusinessTravel& operator=(const BusinessTravel &right)
    {
    	Travel::operator=(right);
    	pager = right.pager;
    	cout << "BusinessTravel::operator=(const BusinessTravel&)\n";
    }	
};

int main()
{
	BusinessTravel bt1;
	BusinessTravel bt2(bt1);
	BusinessTravel bt3("bt3");
	bt1 = bt3;
}