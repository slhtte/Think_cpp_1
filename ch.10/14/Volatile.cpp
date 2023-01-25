//: C08:Volatile.cpp
// �������� ����� volatile

class Comm {
  static const unsigned char byte = 0;
  static unsigned char flag;
  enum { bufsize = 100 };
  static unsigned char buf[bufsize];
  static int index;
public:
  Comm() {}
  static void isr();
  char read(int index) const;
};

unsigned char Comm::flag = 0;
unsigned char Comm::buf[bufsize] = { 0 };
int Comm::index = 0;


// ������������; ������ ������������
// ��� ��������� ����������:
void Comm::isr() 
{
  flag = 0;
  buf[index++] = byte;
  // ������� � ������ ������:
  if(index >= bufsize) index = 0;
}

char Comm::read(int index) const {
  if(index < 0 || index >= bufsize)
    return 0;
  return buf[index];
}

int main() {
  Comm Port;
  Comm::isr(); // OK
//!  Port.read(0); // ������, ������� read() �� ��������� volatile
} ///:~