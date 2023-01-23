//: C13:Framis.cpp
// Локальная перегрузка операторов new и delete
#include <cstddef> // Size_t
#include <fstream>
#include <iostream>
#include <new>
#include <ctime>
using namespace std;
//ofstream out("Framis.out");

class Framis {
  enum { sz = 10 };
  char c[sz]; // Простой заполнитель памяти (не используется)
  static unsigned char pool[];
  static bool alloc_map[];
public:
  enum { psize = 100000 };  // Максимальное количество объектов
  Framis() {}
  ~Framis() {}
  void* operator new(size_t) throw(bad_alloc);
  void operator delete(void*);
};
unsigned char Framis::pool[psize * sizeof(Framis)];
bool Framis::alloc_map[psize] = {false};

// Размер игнорируется -- предполагаем объект Framis
void* 
Framis::operator new(size_t) throw(bad_alloc) {
  for(int i = 0; i < psize; i++)
    if(!alloc_map[i]) {
      alloc_map[i] = true; // Пометить как используемый
      return pool + (i * sizeof(Framis));
    }
  throw bad_alloc();
}

void Framis::operator delete(void* m) {
  if(!m) return; // Проверка null-указателя
  // Предполагается, что объект был создан в пуле.
  // Вычисляем номер блока:
  unsigned long block = (unsigned long)m
    - (unsigned long)pool;
  block /= sizeof(Framis);
  // Mark it free:
  alloc_map[block] = false;
}

class Framis_def {
  enum { sz = 10 };
  char c[sz]; // Простой заполнитель памяти (не используется)

public:
  enum { psize = 100000 };  // Максимальное количество объектов
  Framis_def() {}
  ~Framis_def() {}
};

int main() {

  unsigned int start_time = clock();

  Framis* f[Framis::psize];
  try {
    for(int i = 0; i < Framis::psize; i++)
      f[i] = new Framis;
    new Framis; // Нехватка памяти
  } catch(bad_alloc) {
    cerr << "Out of memory!" << endl;
  }
  delete f[10];
  f[10] = 0;
  // Использование освобожденной памяти:
  Framis* x = new Framis;
  delete x;
  for(int j = 0; j < Framis::psize; j++)
    delete f[j]; // Освобождаем f[10] OK

  unsigned int end_time = clock();
  cout << "Framis run_time = " << end_time - start_time << endl;;
  
  start_time = clock();

  Framis_def* f_def[Framis_def::psize];
  try {
    for(int i = 0; i < Framis_def::psize; i++)
      f_def[i] = new Framis_def;
    new Framis_def; // Нехватка памяти
  } catch(bad_alloc) {
    cerr << "Out of memory!" << endl;
  }
  delete f_def[10];
  f_def[10] = 0;
  // Использование освобожденной памяти:
  Framis_def* x_def = new Framis_def;
  delete x_def;
  for(int j = 0; j < Framis_def::psize; j++)
    delete f_def[j]; // Освобождаем f[10] OK

  end_time = clock();

  cout << "Framis_def run_time = " << end_time - start_time << endl;
} ///:~