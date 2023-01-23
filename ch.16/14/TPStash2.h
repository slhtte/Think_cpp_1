//: C16:TPStash2.h
// ����������������� ����� PStash � ��������� ����������
#ifndef TPSTASH2_H
#define TPSTASH2_H
#include "../../require.h"
#include <cstdlib>
#include <cstring>
#include <vector>

template<class T, int incr = 20>
class PStash {
  std::vector<T *> storage;
public:
  PStash() {}
  ~PStash();
  int add(T* element);
  T* operator[](int index) const;
  T* remove(int index);
  int count() const { return storage.size(); }
  // ��������� ����� ���������:
  class iterator; // ���������� ����������
  friend class iterator; // ������������� �����
  class iterator { // ������ ����� ����������
    PStash& ps;
    int index;
  public:
    iterator(PStash& pStash)
      : ps(pStash), index(0) {}
    // ��� �������� "��������� ���������"
    iterator(PStash& pStash, bool)
      : ps(pStash), index(ps.count()) {}
    // ���������� �����������:
    iterator(const iterator& rv)
      : ps(rv.ps), index(rv.index) {}
    iterator& operator=(const iterator& rv) {
      ps = rv.ps;
      index = rv.index;
      return *this;
    }
    iterator& operator++() {
      require(++index <= ps.count(),
        "PStash::iterator::operator++ "
        "moves index out of bounds");
      return *this;
    }
    iterator& operator++(int) {
      return operator++();
    }
    iterator& operator--() {
      require(--index >= 0,
        "PStash::iterator::operator-- "
        "moves index out of bounds");
      return *this;
    }
    iterator& operator--(int) { 
      return operator--();
    }
    // �������� ��������� � ������ � �������� ������������:
    iterator& operator+=(int amount) {
      require(index + amount < ps.count() && 
        index + amount >= 0, 
        "PStash::iterator::operator+= "
        "attempt to index out of bounds");
      index += amount;
      return *this;
    }
    iterator& operator-=(int amount) {
      require(index - amount < ps.count && 
        index - amount >= 0, 
        "PStash::iterator::operator-= "
        "attempt to index out of bounds");
      index -= amount;
      return *this;
    }
    // �������� ������ ��������� � ������������ ������
    iterator operator+(int amount) const {
      iterator ret(*this);
      ret += amount; // op+= ������������ �������� ������
      return ret;
    }
    T* current() const {
      return ps.storage[index];
    }
    T* operator*() const { return current(); }
    T* operator->() const { 
      require(ps.storage[index] != 0, 
        "PStash::iterator::operator->returns 0");
      return current(); 
    }
    // �������� �������� ��������:
    T* remove(){
      return ps.remove(index);
    }
    // ��������� ��� �������� ������ � ����� ����������:
    bool operator==(const iterator& rv) const {
      return index == rv.index;
    }
    bool operator!=(const iterator& rv) const {
      return index != rv.index;
    }
  };
  iterator begin() { return iterator(*this); }
  iterator end() { return iterator(*this, true);}
};

// ����������� ���������� ��������:
template<class T, int incr>
PStash<T, incr>::~PStash() {
  for(int i = 0; i < count(); i++) {
    delete storage[i]; // ��������� ��� null-����������
    storage[i] = 0; // ��� ����������
  }
  storage.clear();
}

template<class T, int incr>
int PStash<T, incr>::add(T* element) {
  storage.push_back(element);
  return storage.size() - 1; // ������
}

template<class T, int incr> inline
T* PStash<T, incr>::operator[](int index) const {
  require(index >= 0,
    "PStash::operator[] index negative");
  if(index >= storage.size())
    return 0; // To indicate the end
  require(storage[index] != 0, 
    "PStash::operator[] returned null pointer");
  return storage[index];
}

template<class T, int incr>
T* PStash<T, incr>::remove(int index) {
  // operator[] ��������� ���������������� �������:
  T* v = operator[](index);
  // "��������" ���������:
  storage[index] = 0;
  return v;
}
#endif // TPSTASH2_H ///:~