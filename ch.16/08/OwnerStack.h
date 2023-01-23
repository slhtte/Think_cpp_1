//: C16:OwnerStack.h
// Стек с управлением принадлежностью объектов
#ifndef OWNERSTACK_H
#define OWNERSTACK_H

#include <vector>

template<class T> class Stack {
  /*struct Link {
    T* data;
    Link* next;
    Link(T* dat, Link* nxt) 
      : data(dat), next(nxt) {}
  }* head;
  */
  std::vector<T *> v;
  bool own;
public:
  Stack(bool own = true) : own(own) {}
  ~Stack();
  void push(T* dat) {
    v.push_back(dat);
  }
  T* peek() const { 
    if (v.size() != 0)
    {
      return v[v.size() - 1];
    }

    return nullptr;
  }
  T* pop();
  bool owns() const { return own; }
  void owns(bool newownership) {
    own = newownership;
  }
  // Автоматическое приведение типа: true, если стек не пуст.
  operator bool() const { return v.size() != 0; }
};

template<class T> T* Stack<T>::pop() {
  if(v.size() == 0) return nullptr;
  T *res = peek();
  v.resize(v.size() - 1);
  return res;
}

template<class T> Stack<T>::~Stack() {
  if(!own) return;
  while(!v.empty())
    delete pop();
}
#endif // OWNERSTACK_H ///:~ 