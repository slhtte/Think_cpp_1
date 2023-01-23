//: C04:CppLib.h
// Библиотека в стиле C, переведенная на C++
#include <vector>
struct Stash {
  int size;      // Размер каждого элемента
  int quantity;  // Количество элементов 
  int next;      // Следующий пустой элемент
   // Динамически выделяемый байтовый массив:
  std::vector<unsigned char> storage;
  // Функции!
  void initialize(int size);
  void cleanup();
  int add(const void* element);
  void* fetch(int index);
  int count();
  void inflate(int increase);
}; ///:~
