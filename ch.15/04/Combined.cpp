//: C14:Combined.cpp
// ������������ � ����������

class A {
  int i;
public:
  A(int ii) : i(ii) {}
  ~A() {}
  void f() const {}
};

class B {
  int i;
public:
  B(int ii) : i(ii) {}
  ~B() {}
  virtual void f() const {}
};

class C : public B {
  A a;
public:
  C(int ii) : B(ii), a(ii) {}
  ~C() {} // �������� ~A() � ~B()
  void f() const {  // ���������������
    a.f();
    B::f();
  }
};

int main() {
  B *b = new C(47);
  b->f();
} ///:~