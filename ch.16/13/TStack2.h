//: C16:TStack2.h
// ����������������� ����� Stack � ��������� ����������
#ifndef TSTACK2_H
#define TSTACK2_H

#include <stack>
//#include <vector>
#include "../../require.h"

template <typename T>
class My_stack : public std::stack<T> 
{
public:
  //void push(T dat) { std::stack<T>::push(dat); }
  const T& get(int index) const { return std::stack<T>::c.operator[](index); }
};

template<class T> class Stack {
  My_stack<T *> v;
public:
  Stack() {}
  ~Stack();
  void push(T* dat) {
    v.push(dat);
  }
  T* peek() const { 
    return v.top();
  }
  T* pop();
  // ��������� ����� ���������:
  class iterator; // ���������� ����������
  friend class iterator; // ������������� �����
  class iterator { // ������ ����� ����������
    const My_stack<T *> *p;
    int index;
  public:
    iterator(const Stack<T>& tl) : p(&tl.v), index(0) {}
    // ���������� �����������:
    iterator(const iterator& tl) : p(tl.p), index(tl.index) {}
    // �������� ��������:
    iterator() : p(nullptr), index(0) {}
    // operator++ ���������� ���������� ������� ����� ������������������:
    bool operator++() {
      if(index + 1 < p->size())
        ++index;
      else p = nullptr; // ������� ����� ������
      return bool(p);
    }
    bool operator++(int) { return operator++(); }
    T* current() const {
      if(p->empty()) return 0;
      return p->get(index);
    }
    // �������� ������������� ���������:
    T* operator->() const { 
      require(p->size() != 0, 
        "PStack::iterator::operator->returns 0");
      return current(); 
    }
    T* operator*() const { return current(); }
    // �������������� � bool ��� �������� ��������:
    operator bool() const { return bool(!p->empty()); }
    // ��������� ��� �������� ������ � ����� ����������:
    bool operator==(const iterator&) const {
      return p == nullptr;
    }
    bool operator!=(const iterator&) const {
      return p != nullptr;
    }
  };
  iterator begin() const { 
    return iterator(*this); 
  }
  iterator end() const { return iterator(); }
};

template<class T> Stack<T>::~Stack() {
  while(!v.empty())
    delete pop();
}

template<class T> T* Stack<T>::pop() {
  if(v.empty()) return 0;
  T *res = v.top();
  v.pop();
  return res;
}
#endif // TSTACK2_H ///:~