//: C12:ReferenceCounting.cpp
// ������� ������, ����������� ��� ������
#include "../../require.h"
#include <string>
#include <iostream>
using namespace std;

class Dog {
string nm;
int refcount;
static int count;
int c;
Dog(const string& name)
: nm(name), refcount(1) {
	c = ++count;
cout << "Creating Dog: " << *this << " count = " << c << endl;
}
// ������ ������������:
Dog& operator=(const Dog& rv);
public:
// ������� Dog ����� ����������� ������ � ����:
static Dog* make(const string& name) {
return new Dog(name);
}
Dog(const Dog& d)
: nm(d.nm + " copy"), refcount(1) {
	c = ++count;
cout << "Dog copy-constructor: "
<< *this << " count = " << c << endl;
}
~Dog() {
cout << "Deleting Dog: " << *this << endl;
}
void attach() {
++refcount;
cout << "Attached Dog: " << *this << endl;
}
void detach() {
require(refcount != 0);
cout << "Detaching Dog: " << *this << endl;
// ���� ������ ����� �� ������������, ���������� ���:
if(--refcount == 0) delete this;
}
// �������� ����������� ������� Dog.
// ���������� ����� ������������ Dog, ���������� ���������
// ������������� Dog*.
Dog* unalias() {
cout << "Unaliasing Dog: " << *this << endl;
// �� ����������, ���� �� ������ ���������� ������������ ������:
if(refcount == 1) return this;
--refcount;
// ����������� ����������� ��� ������ ����������� ������������:
return new Dog(*this);
}
void rename(const string& newName) {
nm = newName;
cout << "Dog renamed to: " << *this << endl;
}
friend ostream&
operator<<(ostream& os, const Dog& d) {
return os << "[" << d.nm << "], rc = "
<< d.refcount;
}
};

int Dog::count = 0;

class DogHouse {
Dog* p;
string houseName;
static int count;
int c;
public:
DogHouse(Dog* dog, const string& house)
: p(dog), houseName(house) {
	c = ++count;
cout << "Created DogHouse: "<< *this << " count = " << c << endl;
}
DogHouse(const DogHouse& dh)
: p(dh.p),
houseName("copy-constructed " +
dh.houseName) {
	c = ++count;
p->attach();
cout << "DogHouse copy-constructor: "
<< *this << " count = " << c << endl;
}
DogHouse& operator=(const DogHouse& dh) {
// �������� �� ����������������:
if(&dh != this) {
houseName = dh.houseName + " assigned";
// ������� ����������� ����� � ������������ ��������:
p->detach();
p = dh.p; // ��� ���������� �����������
p->attach();
}
cout << "DogHouse operator= : "
<< *this << endl;
return *this;
}
// ���������� �������� ������, �������� �����������
~DogHouse() {
cout << "DogHouse destructor: "
<< *this << endl;
p->detach();
}
void renameHouse(const string& newName) {
houseName = newName;
}
void unalias() { p = p->unalias(); }
// ����������� ��� ������. ����� ������ ������������
// �������, ���������� � ����������, ���������� �������
// ������� ��� ���� unalias():
void renameDog(const string& newName) {
unalias();
p->rename(newName);
}
Dog* getDog() {
unalias();
return p;
}
friend ostream&
operator<<(ostream& os, const DogHouse& dh) {
return os << "[" << dh.houseName
<< "] contains " << *dh.p << " count = " << dh.c;
}
};

int DogHouse::count = 0;

int main() {
DogHouse
fidos(Dog::make("Fido"), "FidoHouse"),
spots(Dog::make("Spot"), "SpotHouse");
cout << "Entering copy-construction" << endl;
DogHouse bobs(fidos);
cout << "After copy-constructing bobs" << endl;
cout << "fidos:" << fidos << endl;
cout << "spots:" << spots << endl;
cout << "bobs:" << bobs << endl;
cout << "Entering spots = fidos" << endl;
spots = fidos;
cout << "After spots = fidos" << endl;
cout << "spots:" << spots << endl;
cout << "Entering self-assignment" << endl;
bobs = bobs;
cout << "After self-assignment" << endl;
cout << "bobs:" << bobs << endl;
// ��������������� ��������� ������:
cout << "Entering rename(\"Bob\")" << endl;
bobs.getDog()->rename("Bob");
cout << "After rename(\"Bob\")" << endl;
} ///:~