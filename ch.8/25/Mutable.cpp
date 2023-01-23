//: C08:Mutable.cpp
// �������� ����� "mutable"

class Z {
  int i;
  mutable int j;
public:
  Z();
  void f() const;
};

Z::Z() : i(0), j(0) {}

void Z::f() const {
 i++; // ������ -- ����������� �������
    j++; // �����: mutable
}

int main() {
  const Z zz;
  zz.f(); // ������� �������� ����������� ������!
} ///:~