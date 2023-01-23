//: C14:Instrument.cpp
// Наследование и повышающее приведение типа
#include <iostream>
using namespace std;

enum note { middleC, Csharp, Cflat }; // И т. д.

class Instrument {
public:
  void play(note) const {}
  void prepare() const { cout << "Instrument::prepare()...\n"; }
};

// Духовые музыкальные инструменты (Wind) являются музыкальными 
// инструментами (Instrument), поскольку обладают тем же интерфейсом:
class Wind : public Instrument {};

void tune(Instrument& i) {
  // ...
  i.play(middleC);
  i.prepare();
}

int main() {
  Wind flute;
  tune(flute); // Повышающее приведение типа
} ///:~