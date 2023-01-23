//: C13:NoMemory.cpp
// При неудачном вызове new конструктор не вызывается
#include <iostream>
#include <malloc.h>
#include <new> // Определение bad_alloc
using namespace std;

class NoMemory {
public:
  NoMemory() {
    cout << "NoMemory::NoMemory()" << endl;
  }
  ~NoMemory()
  {
    cout << "~NoMemory()...\n";
  }
  void* operator new(size_t sz) //throw(bad_alloc)
  {
    cout << "NoMemory::operator new" << endl;
    void* res = nullptr;
    try
    {
        res = ::new char[100000000];
        return res;
    } catch (bad_alloc)
    {
        cerr << "Out of memory exception\n";
    }

    return nullptr;    
  }
};

int main() {
  NoMemory* nm = 0;
  //try {
    while (true)
    {
      nm = new NoMemory;

      if (nm == nullptr)
      {
        delete nm;
        break;
      }
    }
  /*} catch(bad_alloc) {
    cerr << "Out of memory exception" << endl;
  }*/
  cout << "nm = " << nm << endl;
} ///:~