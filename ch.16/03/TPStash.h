//: C16:TPStash.h
#ifndef TPSTASH_H
#define TPSTASH_H

#include <cstring>
#include <iostream>

template<class T, int incr = 10>
class PStash {
  int quantity; // Количество элементов
  int next; // Следующий пустой элемент
  T** storage;
  int inc;
  void inflate(int increase = incr);
public:
  PStash() : quantity(0), next(0), storage(0), inc(incr) {}
  ~PStash();
  int add(T* element);
  T* operator[](int index) const; // Выборка
  // Удаление ссылки из PStash:
  T* remove(int index);
  // Количество элементов в Stash:
  int count() const { return next; }
  void set_incr(int i) { inc = i; }
};

template<class T, int incr>
int PStash<T, incr>::add(T* element) {
  if(next >= quantity)
    inflate(inc);
  storage[next++] = element;
  return(next - 1); // Индекс
}

// Принадлежность оставшихся указателей:
template<class T, int incr>
PStash<T, incr>::~PStash() {
  for(int i = 0; i < next; i++) {
    delete storage[i]; // Допустимо для null-указателей
    storage[i] = 0;    // Для надежности
  }
  delete []storage;
}

template<class T, int incr>
T* PStash<T, incr>::operator[](int index) const {
  require(index >= 0,
    "PStash::operator[] index negative");
  if(index >= next)
    return 0; // Чтобы показать на конец
  require(storage[index] != 0, 
    "PStash::operator[] returned null pointer");
  // Получение указателя на нужный элемент:
  return storage[index];
}

template<class T, int incr>
T* PStash<T, incr>::remove(int index) {
  // operator[] проверяет действительность индекса:
  T* v = operator[](index);
  // "Удаление" указателя:
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
  delete []storage; // Освобождение старого буфера
  storage = st; // Перевод указателя на новый буфер
}
#endif // TPSTASH_H ///:~