//: C04:CppLib.cpp {O}
// Библиотека в стиле C, переведенная на C++
// Объявление структуры и функций:
#include "CppLib.h"
#include <iostream>
#include <cassert>
using namespace std;
// Количество элементов, добавляемых при увеличении размера буфера:
const int increment = 100;

void Stash::initialize(int sz) {
  size = sz;
  next = 0;
}

int Stash::add(const void* element) {
  unsigned char* e = (unsigned char*)element;
  for(int i = 0; i < size; i++)
    storage.push_back(e[i]);
  next++;
  return(next - 1); // Индекс
}

void* Stash::fetch(int index) {
  // Проверка индекса:
  assert(0 <= index);
  if(index >= next)
    return 0; // Признак конца
  // Указатель на запрашиваемый элемент:
  return &(storage[index * size]);
}

int Stash::count() {
  return next; // Количество элементов в Stash
}

void Stash::cleanup() {
  if(storage.size() != 0) {
    cout << "freeing storage" << endl;
    storage.clear();
  }
} ///:~
