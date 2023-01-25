//: C07:Mem.h
#ifndef MEM_H
#define MEM_H
typedef unsigned char byte;

class Mem {
  byte* mem;
  int size;
  void ensureMinSize(int minSize);
public:
  Mem();
  Mem(int sz);
  Mem(const Mem &other);
  ~Mem();
  int msize();
  byte* pointer();
  byte* pointer(int minSize);
}; 
#endif // MEM_H ///:~