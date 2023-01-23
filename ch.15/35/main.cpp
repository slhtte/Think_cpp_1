//: C15:StaticHierarchyNavigation.cpp
// ����������� �� �������� ������� � ����������� ��������� static_cast
#include <iostream>
#include <typeinfo>
using namespace std;

enum type_e { Circles, Squares };

class Shape 
{ 
    type_e type;
    public:
      Shape(type_e t) : type(t) {}
      virtual ~Shape() {}
      virtual type_e whatAmI() const { return type; }

};
class Circle : public Shape 
{
  public:
    Circle() : Shape(Circles) {}
    type_e whatAmI() const { return Circles; }
};
class Square : public Shape 
{
public:
    Square() : Shape(Squares) {}
    type_e whatAmI() const { return Squares; }
};
class Other {};

int main() {
  Circle c;
  Shape* s = &c; // ���������� ���������� ����: ��� ���������
  // ����� ���������, �� �� ������������ �����:
  s = static_cast<Shape*>(&c);
  // (��������� ���������� ���������� ���� �������� ����������
  // � ����� ����������� ���������, static_cast ���� ������������ ���������)
  Circle *cp = new Circle;
  Square *sp = new Square;
  // ��� ������������ ����������� �� �������� �������
  // ���������� �������������� ���������� � ����:
  if(s->whatAmI() == cp->whatAmI())
  { // C++ RTTI
    delete cp;
    cp = static_cast<Circle*>(s);
  }
  if(s->whatAmI() == sp->whatAmI())
  {
    delete sp;
    sp = static_cast<Square*>(s);
  }
  if(cp != 0)
    cout << "It's a circle!" << endl;
  if(sp != 0)
    cout << "It's a square!" << endl;
  // ����������� ����������� ������������ ������
  // ��� ��������� �������������; dynamic_cast ������ ����������.
  // �������
  // Other* op = static_cast<Other*>(s);
  // ������ �������� ��������� �� ������, ����� ��� ���
  Other* op2 = (Other*)s;
  // ����� ��������� �� ��������.
} ///:~