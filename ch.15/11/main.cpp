#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Aircraft
{
public:
	virtual ~Aircraft() { cout << "~Aircraft()\n"; }
	virtual void fly() const  = 0;
	virtual void wait() const = 0;
	virtual void land() const  = 0;
};

#define CLASS(C)\
class C : public Aircraft\
{\
public:\
    ~C() { cout << "~"#C"()\n"; }\
    void fly() const { cout << #C"::fly()\n"; }\
    void wait() const { cout << #C"::wait()\n"; }\
    void land() const { cout << #C"::land()\n"; }\
};

CLASS(Boing);
CLASS(AIRBUS);
CLASS(SUPER_JET);

class Tower
{
	vector<Aircraft *> v;
public:
	void add_aircraft(Aircraft *a) { v.push_back(a); }
	void work() const;
};

void Tower::work() const
{
	for (int i = 0; i < v.size(); ++i)
	{
		switch (i)
		{
			case 0:
			{
				v[0]->fly();
				v[1]->wait();
				v[2]->wait();
				break;
			}
			case 1:
			{
				v[0]->fly();
				v[1]->fly();
				v[2]->wait();
				break;
			}
			case 2:
			{
				v[0]->land();
				v[1]->wait();
				v[2]->fly();
				break;
			}
			default:
			break;
		}
	}
}

int main()
{
	Tower t;
	t.add_aircraft(new Boing);
	t.add_aircraft(new AIRBUS);
	t.add_aircraft(new SUPER_JET);
	t.work();
}