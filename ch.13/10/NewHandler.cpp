//: C13:NewHandler.cpp
// Изменение обработчика new
#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

int count = 0;

void out_of_memory() {
  cerr << "memory exhausted after " << count 
    << " allocations!" << endl << "available heap size = " << count * sizeof(int) * 10000 << endl;
  exit(1);
}

int main() {
  set_new_handler(out_of_memory);
  while(1) {
    count++;
    new int[10000]; // Расходует всю память
  }
} ///:~