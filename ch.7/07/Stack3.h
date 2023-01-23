//: C06:Stack3.h
// —тек с конструктором и деструктором
#ifndef STACK3_H
#define STACK3_H

#include <string>

class Stack {
  struct Link {
    void* data;
    Link* next;
    Link(void* dat, Link* nxt);
    ~Link();
  }* head;
public:
  Stack();
  Stack(std::string *arr, int len);
  ~Stack();
  void push(void* dat);
  void* peek();
  void* pop();
};
#endif // STACK3_H ///:~
