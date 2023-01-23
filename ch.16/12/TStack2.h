//: C16:TStack2.h
// Параметризованный класс Stack с вложенным итератором
#ifndef TSTACK2_H
#define TSTACK2_H

#include <vector>
#include "../../require.h"

template<class T> class Stack {
  std::vector<T *> v;
public:
  Stack() {}
  ~Stack();
  void push(T* dat) {
    v.push_back(dat);
  }
  T* peek() const { 
    return v[v.size() - 1];
  }
  T* pop();
  // Вложенный класс итератора:
  class iterator; // Необходимо объявление
  friend class iterator; // Дружественный класс
  class iterator { // Теперь можно определять
    const std::vector<T *> *p;
    int index;
  public:
    iterator(const Stack<T>& tl) : p(&tl.v), index(0) {}
    // Копирующий конструктор:
    iterator(const iterator& tl) : p(tl.p), index(tl.index) {}
    // Конечный итератор:
    iterator() : p(nullptr), index(0) {}
    // operator++ возвращает логический признак конца последовательности:
    bool operator++() {
      if(index + 1 < p->size())
        ++index;
      else p = nullptr; // Признак конца списка
      return bool(p);
    }
    bool operator++(int) { return operator++(); }
    T* current() const {
      if(p->empty()) return 0;
      return p->at(index);
    }
    // Оператор разыменования указателя:
    T* operator->() const { 
      require(p->size() != 0, 
        "PStack::iterator::operator->returns 0");
      return current(); 
    }
    T* operator*() const { return current(); }
    // Преобразование к bool для условной проверки:
    operator bool() const { return bool(!p->empty()); }
    // Сравнение для проверки выхода в конец контейнера:
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
  T* result = v[v.size() - 1];
  v.resize(v.size() - 1);
  return result;
}
#endif // TSTACK2_H ///:~