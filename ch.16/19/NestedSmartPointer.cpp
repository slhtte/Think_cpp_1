//: C12:NestedSmartPointer.cpp
#include <iostream>
#include <vector>
#include "../../require.h"
using namespace std;

class Obj {
static int i, j;
public:
void f() { cout << i++ << endl; }
void g() { cout << j++ << endl; }
};

class My_obj : public Obj
{
public:
	void f() { cout << "My_obj::f()\n"; }
	void g() { cout << "My_obj::g()\n"; }
};

// ����������� ����������� ����������:
int Obj::i = 47;
int Obj::j = 11;

// ���������:
template <typename T>
class ObjContainer {
vector<T*> a;
public:
void add(T* obj) { a.push_back(obj); }
class SmartPointer;
friend class SmartPointer;
class SmartPointer {
ObjContainer& oc;
unsigned int index;
public:
SmartPointer(ObjContainer& objc) : oc(objc) {
index = 0;
}
// ������������ �������� �������� ������� ����� ������:
bool operator++() { // ���������� ������
if(index >= oc.a.size()) return false;
if(oc.a[++index] == 0) return false;
return true;
}
bool operator++(int) { // ����������� ������
return operator++(); // ������������� ���������� ������
}
T* operator->() const {
require(oc.a[index] != 0, "Zero value "
"returned by SmartPointer::operator->()");
return oc.a[index];
}
};
// ������� ��� ��������� ������ ���������,
// �������������� � ������ ObjContainer:
SmartPointer begin() {
return SmartPointer(*this);
}
};

int main() {
const int sz = 10;
My_obj o[sz];
ObjContainer<My_obj> oc;
for(int i = 0; i < sz; i++)
oc.add(&o[i]); // ���������� ����������
ObjContainer<My_obj>::SmartPointer sp = oc.begin();
do {
sp->f(); // ����� ��������� ������������� ���������
sp->g();
} while(++sp);
} ///:~