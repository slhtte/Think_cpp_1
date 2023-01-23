//: C15:Instrument3.cpp
// Позднее связывание с ключевым словом virtual
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Cflat }; // И т. д.

class Instrument {
public:
  virtual void play(note) const {
    cout << "Instrument::play" << endl;
  }

  virtual void prepare() const { cout << "Instrument::prepare()\n"; }
};

// Духовые музыкальные инструменты (Wind) являются музыкальными 
// инструментами (Instrument), поскольку обладают тем же интерфейсом:
class Wind : public Instrument {
public:
  // Переопределение интерфейсной функции:
  void play(note) const {
    cout << "Wind::play" << endl;
  }

  void prepare() const { cout << "Wind::prepare()\n"; }
};

void tune(Instrument& i) {
  // ...
  i.play(middleC);
  i.prepare();
}

int main() {
  Wind flute;
  tune(flute); // Повышающее приведение типа
} ///:~