//: C04:CppLib.cpp {O}
// ���������� � ����� C, ������������ �� C++
// ���������� ��������� � �������:
#include "CppLib.h"
#include <iostream>
#include <cassert>
using namespace std;
// ���������� ���������, ����������� ��� ���������� ������� ������:
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
  return(next - 1); // ������
}

void* Stash::fetch(int index) {
  // �������� �������:
  assert(0 <= index);
  if(index >= next)
    return 0; // ������� �����
  // ��������� �� ������������� �������:
  return &(storage[index * size]);
}

int Stash::count() {
  return next; // ���������� ��������� � Stash
}

void Stash::cleanup() {
  if(storage.size() != 0) {
    cout << "freeing storage" << endl;
    storage.clear();
  }
} ///:~
