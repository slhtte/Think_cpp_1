//: C07:Stash3.cpp {O}
// ���������� �������
#include "Stash3.h"
#include "../require.h"
#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;
const int increment = 100;

Stash::Stash(int sz) {
  size = sz;
  quantity = 0;
  next = 0;
  storage = 0;
}

Stash::Stash(int sz, int initQuantity) {
  size = sz;
  quantity = 0;
  next = 0;
  storage = 0;
  inflate(initQuantity);
}

Stash::~Stash() {
  if(storage != 0) {
    cout << "freeing storage" << endl;
    if (storage) delete storage;
  }
}

int Stash::add(void* element) {
  if(next >= quantity) // � ������ ���� ��������� �����?
    inflate(increment);
  if (!storage) storage = new Mem;
  // ����������� ������� � ��������� ��������� ������� ������:
  unsigned char *e = (unsigned char *)element;
  memcpy((byte *)storage->pointer(size * next) + size * next, e, size);
  ++next;
  return(next - 1); // ������
}

void* Stash::fetch(int index) {
  require(0 <= index, "Stash::fetch (-)index");
  if(index >= next)
    return 0; // ������� �����
  // ��������� �� ������������� �������:
  return storage->pointer() + index * size;
}

int Stash::count() {
  return next; // ���������� ��������� � CStash
}

void Stash::inflate(int increase) {
  assert(increase >= 0);
  if(increase == 0) return;
  int newQuantity = quantity + increase;
  int newBytes = newQuantity * size;
  int oldBytes = quantity * size;
  if (!storage) storage = new Mem;
  storage->pointer(newBytes);
  quantity = newQuantity; // ��������� �������
} ///:~