//: C15:OStack.h
// Использование однокоренной иерархии
#ifndef OSTACK_H
#define OSTACK_H

#include <string>

class Object {
public:
  virtual ~Object() = 0;
};

// Обязательное определение:
inline Object::~Object() {}

template <typename T>
class Stack : public T, public Object
{
  struct Link {
    T* data;
    Link* next;
    Link(T* dat, Link* nxt) : 
      data(dat), next(nxt) {}
  }* head;
public:
  Stack() : head(0) {}
  ~Stack(){ 
    while(head)
      delete pop();
  }
  void push(T* dat) {
    head = new Link(dat, head);
  }
  T* peek() const {
    return head ? head->data : 0;
  }
  T* pop() {
    if(head == 0) return 0;
    T* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
  }
};
#endif // OSTACK_H ///:~