//: C05:Stash.h
// ������ Stash � ������������ �������
#ifndef STASH_H
#define STASH_H

class Stash {
  int size;      // ������ ������� ��������
  int quantity;  // ���������� ���������
  int next;      // ��������� ������ �������
  // ����������� ���������� �������� ������:
  unsigned char* storage;
  void inflate(int increase);
public:
  void initialize(int size);
  void cleanup();
  int add(const void* element);
  void* fetch(int index);
  int count();
};
#endif // STASH_H ///:~
