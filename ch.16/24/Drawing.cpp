//: C16:Drawing.cpp
#include <vector> // ������������ ����������� ��������� vector!
#include "TPStash2.h"
#include "TStack2.h"
#include "Shape.h"
using namespace std;

// Drawing --  ��������� ��� �������� �������� Shape:
class Drawing : public PStash<Shape> {
public:
  ~Drawing() { cout << "~Drawing" << endl; }
};

// Plan -- ������ ��������� ��� �������� �������� Shape:
class Plan : public Stack<Shape> {
public:
  ~Plan() { cout << "~Plan" << endl; }
};

// Schematic -- ��� ���� ��������� � ��������� Shape:
class Schematic : public vector<Shape*> {
public:
  ~Schematic() { cout << "~Schematic" << endl; }
};

// ������ �������:
template<class Iter>
void drawAll(Iter start, Iter end) {
  while(start != end) {
    (*start)->draw();
    start++;
  }
}

template <typename Iter>
void eraseAll(Iter start, Iter end)
{
  while (start != end)
  {
    (*start)->erase();
    start++;
  }
}

int main() {
  // ������ ��� ���������� �������� ����� �����������:
  Drawing d;
  d.add(new Circle);
  d.add(new Square);
  d.add(new Line);
  Plan p;
  p.push(new Line);
  p.push(new Square);
  p.push(new Circle);
  Schematic s;
  s.push_back(new Square);
  s.push_back(new Circle);
  s.push_back(new Line);
  Shape* sarray[] = { 
    new Circle, new Square, new Line 
  };
  // ��������� � ��������� ������� ��������� ��������� � ����
  // ���������� ��������:
  cout << "Drawing d:" << endl;
  eraseAll(d.begin(), d.end());
  cout << "Plan p:" << endl;
  eraseAll(p.begin(), p.end());
  cout << "Schematic s:" << endl;
  eraseAll(s.begin(), s.end());
  cout << "Array sarray:" << endl;
  // Even works with array pointers:
  eraseAll(sarray, 
    sarray + sizeof(sarray)/sizeof(*sarray));
  cout << "End of main" << endl;
} ///:~ 