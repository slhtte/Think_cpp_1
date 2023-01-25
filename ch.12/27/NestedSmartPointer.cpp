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

// Определения статических переменных:
int Obj::i = 47;
int Obj::j = 11;

// Контейнер:
class ObjContainer {
vector<Obj*> a;
public:
void add(Obj* obj) { a.push_back(obj); }
class SmartPointer;
friend class SmartPointer;
class SmartPointer {
ObjContainer& oc;
unsigned int index;
public:
SmartPointer(ObjContainer& objc) : oc(objc) {
index = 0;
}
// Возвращаемое значение содержит признак конца списка:
bool operator++() { // Префиксная версия
if(index >= oc.a.size()) return false;
if(oc.a[++index] == 0) return false;
return true;
}
bool operator++(int) { // Постфиксная версия
return operator++(); // Использование префиксной версии
}
Obj* operator->() const {
require(oc.a[index] != 0, "Zero value "
"returned by SmartPointer::operator->()");
return oc.a[index];
}

void operator()() const
{
	cout << "SmartPointer::operator()\n";
	oc.a[index] -> f();
}

};
// Функция для получения умного указателя,
// установленного в начало ObjContainer:
SmartPointer begin() {
return SmartPointer(*this);
}

SmartPointer operator->*(int)
{
	cout << "operator->*\n";
	return SmartPointer(*this);
}
};

int main() {
const int sz = 10;
Obj o[sz];
ObjContainer oc;
for(int i = 0; i < sz; i++)
oc.add(&o[i]); // Заполнение контейнера
ObjContainer::SmartPointer sp = oc.begin();
do {
sp->f(); // Вызов оператора разыменования указателя
sp->g();
} while(++sp);
cout << "===========================\n";
ObjContainer::SmartPointer sp2 = oc->*2;
sp2();
++sp2;
sp2();
} ///:~