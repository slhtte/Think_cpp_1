//: C16:ValueStack.h
// Хранение объектов по значению в стеке
#ifndef VALUESTACK_H
#define VALUESTACK_H
#include "../../require.h"
#include <cstring>
#include <iostream>

template<class T, int ssize = 5>
class Stack {
  // Конструктор по умолчанию выполняет инициализацию
  // для каждого элемента в массиве:
  T *stack;
  int curr_size;
  int top;
  void inflate();
public:
  Stack() : curr_size(ssize), top(0) 
  {
    stack = new T[curr_size];
  }
  // Копирующий конструктор копирует объект в массив:
  void push(const T& x) {
    //require(top < ssize, "Too many push()es");
    if (top >= curr_size)
    {
      inflate();
      std::cout << "push()::new curr_size = " << curr_size << std::endl;
    }
    stack[top++] = x;
  }
  T peek() const { return stack[top - 1]; }
  // Извлеченный объект продолжает существовать;
  // просто он становится недоступным:
  T pop() {
    require(top > 0, "Too many pop()s");
    return stack[--top];
  }
};

template <class T, int ssize>
void Stack<T, ssize>::inflate()
{
  int old_size = curr_size;
  curr_size *= 2;
  T *new_stack = new T[curr_size];
  for (int i = 0; i < old_size; ++i)
  {
    new_stack[i] = stack[i];
  }
  delete []stack;
  stack = new_stack;
}
#endif // VALUESTACK_H ///:~