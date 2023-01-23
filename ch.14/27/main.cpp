#include <iostream>
using namespace std;

class Subject
{
public:
	void f() const { cout << "Subject::f()\n"; }
	void g() const { cout << "Subject::g()\n"; }
	void h() const { cout << "Subject::h()\n"; }
};

class Proxy : public Subject
{
	Subject *subject;
public:
	Proxy(Subject *s) : subject(s) { cout << "Proxy(Subject*)\n"; }
};

class Implementation1 : public Subject
{};

class Implementation2 : public Subject
{};

int main()
{

}