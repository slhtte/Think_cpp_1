//: C05:NestFriend.cpp
// ��������� ������������� ���������
#include <iostream>
#include <cstring> // memset()
using namespace std;
const int sz = 20;

struct Holder {
private:
  int a[sz];
public:
  //void initialize();
  Holder();
  struct Pointer;
  friend struct Pointer;
  struct Pointer {
  private:
    Holder* h;
    int* p;
  public:
    //void initialize(Holder* h);
    Pointer(Holder *h);
    // ����������� �� �������:
    void next();
    void previous();
    void top();
    void end();
    // ��������� � ������:
    int read();
    void set(int i);
  };
};

inline Holder::Holder() {
  memset(a, 0, sz * sizeof(int));
}

inline Holder::Pointer::Pointer(Holder* rv) {
  h = rv;
  p = rv->a;
}

inline void Holder::Pointer::next() {
  if(p < &(h->a[sz - 1])) p++;
}

inline void Holder::Pointer::previous() {
  if(p > &(h->a[0])) p--;
}

inline void Holder::Pointer::top() {
  p = &(h->a[0]);
}

inline void Holder::Pointer::end() {
  p = &(h->a[sz - 1]);
}

inline int Holder::Pointer::read() {
  return *p;
}

inline void Holder::Pointer::set(int i) {
  *p = i;
}

int main() {
  Holder h;
  Holder::Pointer hp(&h), hp2(&h);
  int i;

  for(i = 0; i < sz; i++) {
    hp.set(i);
    hp.next();
  }
  hp.top();
  hp2.end();
  for(i = 0; i < sz; i++) {
    cout << "hp = " << hp.read()
         << ", hp2 = " << hp2.read() << endl;
    hp.next();
    hp2.previous();
  }
} ///:~