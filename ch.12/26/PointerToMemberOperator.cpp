//: C12:PointerToMemberOperator.cpp
#include <iostream>
using namespace std;

class Dog {
public:
int run(int i) const {
cout << "run\n";
return i;
}
int eat(int i) const {
cout << "eat\n";
return i;
}
int sleep(int i) const {
cout << "ZZZ\n";
return i;
}

void sing()const
{
	cout << "prararam!!\n";
}

void swim() const
{
	cout << "bulbulbul\n";
}
typedef int (Dog::*PMF)(int) const;
typedef void (Dog::*VPMF)() const;
// оператор ->* должен возвращать объект
// с функцией operator():
class FunctionObject {
Dog* ptr;
PMF pmem;
VPMF vpmem;
public:
// Сохранение указателей на объект и на функцию
FunctionObject(Dog* wp, PMF pmf)
: ptr(wp), pmem(pmf), vpmem(nullptr) {
cout << "FunctionObject constructor by pmem\n";
}

FunctionObject(Dog* wp, VPMF vpmf)
: ptr(wp), pmem(nullptr), vpmem(vpmf) {
cout << "FunctionObject constructor by vpmem\n";
}

// Вызов функции с использованием указателей на объект и на функцию
int operator()(int i) const {
cout << "FunctionObject::operator()\n";
return (ptr->*pmem)(i); // Вызов
}

void operator()() const {
cout << "FunctionObject::operator()\n";
(ptr->*vpmem)(); // Вызов
}

};
FunctionObject operator->*(PMF pmf) {
cout << "operator->*" << endl;
return FunctionObject(this, pmf);
}

FunctionObject operator->*(VPMF vpmf) {
cout << "operator->*" << endl;
return FunctionObject(this, vpmf);
}

};

int main() {
Dog w;
Dog::PMF pmf = &Dog::run;
cout << (w->*pmf)(1) << endl;
pmf = &Dog::sleep;
cout << (w->*pmf)(2) << endl;
pmf = &Dog::eat;
cout << (w->*pmf)(3) << endl;
Dog::VPMF vpmf=&Dog::sing;
(w->*vpmf)();
vpmf = &Dog::swim;
(w->*vpmf)();
} ///:~