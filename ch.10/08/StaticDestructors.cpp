//: C10:StaticDestructors.cpp
// Деструкторы статических объектов
#include <fstream>
using namespace std;
ofstream out("statdest.out"); // Трассировочный файл

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

Obj a('a'); // Глобальный объект (статическое хранение)
// Конструктор и деструктор вызываются всегда

void f() {
  static Obj b('b');
}

void g() {
  static Obj c('c');
}

int main() {
  out << "inside main()" << endl;
  g(); // Вызов конструктора для статического объекта b
  f(); //не вызывается
  out << "leaving main()" << endl;
} ///:~