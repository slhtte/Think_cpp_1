//: C14:Instrument.cpp
// Наследование и повышающее приведение типа
#include <iostream>
using namespace std;

enum note { middleC, Csharp, Cflat }; // И т. д.

class Instrument {
public:
  virtual void play(note) const { cout << "Instrument::play(note)\n"; }
};

// Духовые музыкальные инструменты (Wind) являются музыкальными 
// инструментами (Instrument), поскольку обладают тем же интерфейсом:
class Wind : public Instrument 
{
public:
	void play(note) const { cout << "Wind::play(note)\n"; }
};

void tune(Instrument& i) {
  // ...
  i.play(middleC);
}

int main() {
  Wind flute;
  tune(flute); // Повышающее приведение типа
} ///:~