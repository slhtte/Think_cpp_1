//: C05:Handle.h
// ������-������������
#ifndef HANDLE_H
#define HANDLE_H

class Handle {
  struct Cheshire; // ������ ���������� ������
  Cheshire* smile;
public:
  Handle(int ii);
  ~Handle();
  int read();
  void change(int);
};
#endif // HANDLE_H ///:~
