//: C15:StaticHierarchyNavigation.cpp
// Перемещение по иерархии классов с применением оператора static_cast
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
  Shape* s = &c; // Повышающее приведение типа: все нормально
  // Более очевидная, но не обязательная форма:
  s = static_cast<Shape*>(&c);
  // (Поскольку повышающее приведение типа является безопасной
  // и часто выполняемой операцией, static_cast лишь загромождает программу)
  Circle *cp = new Circle;
  Square *sp = new Square;
  // Для статического перемещения по иерархии классов
  // необходима дополнительная информация о типе:
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
  // Статическое перемещение используется ТОЛЬКО
  // для повышения эффективности; dynamic_cast всегда безопаснее.
  // Команда
  // Other* op = static_cast<Other*>(s);
  // выдает полезное сообщение об ошибке, тогда как для
  Other* op2 = (Other*)s;
  // такое сообщение не выдается.
} ///:~