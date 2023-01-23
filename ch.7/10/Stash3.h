//: C07:Stash3.h
// ���������� �������
#ifndef STASH3_H
#define STASH3_H

#include "Mem2.h"

class Stash {
  int size;      // ������ ������� ��������
  int quantity;  // ���������� ���������
  int next;      // ��������� ������ �������
  // ����������� ���������� �������� ������:
  Mem *storage;
  void inflate(int increase);
public:
  Stash(int size); // ������� ���������� ���������
  Stash(int size, int initQuantity);
  ~Stash();
  int add(void* element);
  void* fetch(int index);
  int count();
};
#endif // STASH3_H ///:~