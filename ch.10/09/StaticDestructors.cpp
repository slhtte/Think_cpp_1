//: C10:StaticDestructors.cpp
// ����������� ����������� ��������
#include <fstream>
using namespace std;
extern ofstream out; // �������������� ����

class Obj {
  char c;
public:
  Obj(char cc) : c(cc) {
    out << "Obj::Obj() for " << c << endl;
  }
  ~Obj() {
    out << "Obj::~Obj() for " << c << endl;
  }
};

Obj a('a'); // ���������� ������ (����������� ��������)
// ����������� � ���������� ���������� ������

ofstream out("statdest.out");

void f() {
  static Obj b('b');
}

void g() {
  static Obj c('c');
}

int main() {
  out << "inside main()" << endl;
  g(); // ����� ������������ ��� ������������ ������� b
  f(); //�� ����������
  out << "leaving main()" << endl;
} ///:~