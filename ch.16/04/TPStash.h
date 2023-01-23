//: C16:TPStash.h
#ifndef TPSTASH_H
#define TPSTASH_H

#include <cstring>
#include <iostream>
#include "../../require.h"

template<class T, int incr = 1>
class PStash {
  int quantity; // ���������� ���������
  int next; // ��������� ������ �������
  T** storage;
  int increase;
  void inflate(int increase);
  int boost_incr()
  {
    increase *= 2;
    return increase;
  }
public:
  PStash() : quantity(0), next(0), storage(0), increase(incr) {}
  ~PStash();
  int add(T* element);
  T* operator[](int index) const; // �������
  // �������� ������ �� PStash:
  T* remove(int index);
  // ���������� ��������� � Stash:
  int count() const { return next; }
};

template<class T, int incr>
int PStash<T, incr>::add(T* element) {
  if(next >= quantity)
    inflate(boost_incr());
  storage[next++] = element;
  return(next - 1); // ������
}

// �������������� ���������� ����������:
template<class T, int incr>
PStash<T, incr>::~PStash() {
  for(int i = 0; i < next; i++) {
    delete storage[i]; // ��������� ��� null-����������
    storage[i] = 0;    // ��� ����������
  }
  delete []storage;
}

template<class T, int incr>
T* PStash<T, incr>::operator[](int index) const {
  require(index >= 0,
    "PStash::operator[] index negative");
  if(index >= next)
    return 0; // ����� �������� �� �����
  require(storage[index] != 0, 
    "PStash::operator[] returned null pointer");
  // ��������� ��������� �� ������ �������:
  return storage[index];
}

template<class T, int incr>
T* PStash<T, incr>::remove(int index) {
  // operator[] ��������� ���������������� �������:
  T* v = operator[](index);
  // "��������" ���������:
  if(v != 0) storage[index] = 0;
  return v;
}

template<class T, int incr>
void PStash<T, incr>::inflate(int increase) {
  std::cout << "inflate()::increase = " << increase << std::endl;
  const int psz = sizeof(T*);
  T** st = new T*[quantity + increase];
  memset(st, 0, (quantity + increase) * psz);
  memcpy(st, storage, quantity * psz);
  quantity += increase;
  delete []storage; // ������������ ������� ������
  storage = st; // ������� ��������� �� ����� �����
}
#endif // TPSTASH_H ///:~