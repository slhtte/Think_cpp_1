//: C13:ArrayOperatorNew.cpp
// Операторы new и delete для массивов
#include <new> // Определение size_t
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
ofstream trace("ArrayOperatorNew.out");

class Widget {
  enum { sz = 10 };
  int i[sz];
  static vector<Widget *> v;
public:
  Widget() { trace << "*"; }
  ~Widget() { trace << "~"; }
  void* operator new(size_t sz) {
    trace << "Widget::new: "
         << sz << " bytes" << endl;
    void *res = ::new char[sz];
    v.push_back((Widget *)res);

    return res;
  }
  void operator delete(void* p) {
    trace << "Widget::delete" << endl;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
      if (*it == (Widget *)p)
      {
        v.erase(it);
        break;
      }
    }
    ::delete []p;
  }
  void* operator new[](size_t sz) {
    trace << "Widget::new[]: "
         << sz << " bytes" << endl;
    void *result = ::new char[sz];

    size_t arr_size = sz / sizeof(Widget);
    size_t offset = sz % sizeof(Widget);

    Widget *begin = (Widget *)(result + offset);
    for (int i = 0; i < arr_size; ++i)
    {
      begin += i * sizeof(Widget);
      v.push_back(begin);
    }

    return result;
  }
  void operator delete[](void* p) {
    trace << "Widget::delete[]" << endl;
    ::delete []p;
  }

  static vector<Widget *>& get_v()
  {
    return v;
  }
};

vector<Widget *> Widget::v = vector<Widget *>();

class MemoryChecker
{
public:
  ~MemoryChecker()
  {
    cout << "vector<Widget *> size = " << Widget::get_v().size() << endl;
  }
};

MemoryChecker m_checker;

int main() {
  trace << "new Widget" << endl;
  Widget* w = new Widget;
  trace << "\ndelete Widget" << endl;
  delete w;
  trace << "\nnew Widget[25]" << endl;
  Widget* wa = new Widget[25];
  trace << "\ndelete []Widget" << endl;
  delete []wa;
} ///:~