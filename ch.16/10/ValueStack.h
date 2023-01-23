//: C16:ValueStack.h
// �������� �������� �� �������� � �����
#ifndef VALUESTACK_H
#define VALUESTACK_H
#include "../../require.h"
#include <vector>
#include <iostream>

template<class T, int ssize = 5>
class Stack {
  // ����������� �� ��������� ��������� �������������
  // ��� ������� �������� � �������:
  std::vector<T> v;
public:
  Stack() {  }
  // ���������� ����������� �������� ������ � ������:
  void push(const T& x) {
    //require(top < ssize, "Too many push()es");
    v.push_back(x);
  }
  T peek() const { return v[v.size() - 1]; }
  // ����������� ������ ���������� ������������;
  // ������ �� ���������� �����������:
  T pop() {
    T res = peek();
    v.resize(v.size() - 1);
    return res;
  }
};
#endif // VALUESTACK_H ///:~