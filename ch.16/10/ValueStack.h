//: C16:ValueStack.h
// Хранение объектов по значению в стеке
#ifndef VALUESTACK_H
#define VALUESTACK_H
#include "../../require.h"
#include <vector>
#include <iostream>

template<class T, int ssize = 5>
class Stack {
  // Конструктор по умолчанию выполняет инициализацию
  // для каждого элемента в массиве:
  std::vector<T> v;
public:
  Stack() {  }
  // Копирующий конструктор копирует объект в массив:
  void push(const T& x) {
    //require(top < ssize, "Too many push()es");
    v.push_back(x);
  }
  T peek() const { return v[v.size() - 1]; }
  // Извлеченный объект продолжает существовать;
  // просто он становится недоступным:
  T pop() {
    T res = peek();
    v.resize(v.size() - 1);
    return res;
  }
};
#endif // VALUESTACK_H ///:~