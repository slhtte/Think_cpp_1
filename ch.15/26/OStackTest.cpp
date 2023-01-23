//: C15:OStackTest.cpp
//{T} OStackTest.cpp
#include "OStack.h"
#include "../../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// Множественное наследование. Класс должен быть производным
// как от string, так и от Object:
class MyString: public string, public Object {
public:
  ~MyString() {
    cout << "deleting string: " << *this << endl;
  }
  MyString(string s) : string(s) {}
};

class My_class
{
public:
  My_class() { cout << "My_class()\n"; }
};

class My_object : public My_class, public Object
{
public:
  My_object() { cout << "My_object()\n"; }
};

int main() 
{
  /*
  requireArgs(argc, 1); // Аргумент - имя файла
  ifstream in(argv[1]);
  assure(in, argv[1]);
  Stack textlines;
  string line;
  // Чтение файла и сохранение строк в стеке:
  while(getline(in, line))
    textlines.push(new MyString(line));
  // Извлечение строк из стека:
  MyString* s;
  for(int i = 0; i < 10; i++) {
    if((s=(MyString*)textlines.pop())==0) break;
      cout << *s << endl;
      delete s;
  }
  cout << "Letting the destructor do the rest:"
    << endl;
    */
  Stack stack;
  for (int i = 0; i < 5; ++i)
  {
    stack.push(new My_object);
  }

  My_object *o;

  while ((o = (My_object *)stack.pop()) != 0)
  {
    delete o;
  }

} ///:~