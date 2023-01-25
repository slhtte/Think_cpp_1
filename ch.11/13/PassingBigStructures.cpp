//: C11:PassingBigStructures.cpp
struct Big {
  char buf[100];
  int i;
  long d;
} B, B2;

Big bigfun(Big b) {
  b.i = 100; // Делаем что-то с аргументом
  return b;
}

int main() {
  B2 = bigfun(B);
} ///:~