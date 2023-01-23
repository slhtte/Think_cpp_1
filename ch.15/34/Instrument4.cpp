//: C15:Instrument4.cpp
// Расширяемость программ в ООП
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Cflat }; // И т. д.

class Instrument {
public:
  void play(note) const {
    cout << "Instrument::play" << endl;
  }
  char* what() const {
    return "Instrument";
  }
  // Предполагается, что эта функция будет изменять объект
  // ("настройка музыкального инструмента"):
  void adjust(int) {}

  virtual ~Instrument() {}
};

class Wind : public Instrument {
public:
  void play(note) const {
    cout << "Wind::play" << endl;
  }
  char* what() const { return "Wind"; }
  void adjust(int) {}
};

class Percussion : public Instrument {
public:
  void play(note) const {
    cout << "Percussion::play" << endl;
  }
  char* what() const { return "Percussion"; }
  void adjust(int) {}
};

class Stringed : public Instrument {
public:
  void play(note) const {
    cout << "Stringed::play" << endl;
  }
  char* what() const { return "Stringed"; }
  void adjust(int) {}
};

class Brass : public Wind {
public:
  void play(note) const {
    cout << "Brass::play" << endl;
  }
  char* what() const { return "Brass"; }
};

class Woodwind : public Wind {
public:
  void play(note) const {
    cout << "Woodwind::play" << endl;
  }
  char* what() const { return "Woodwind"; }
};



// Новая функция:
void f(Instrument& i) { i.adjust(1); }

// Повышающее приведение типа при инициализации массива:
Instrument* A[] = {
  new Wind,
  new Percussion,
  new Stringed,
  new Brass,
  new Woodwind
};

// Функция осталась неизменной:
void tune(Instrument& i) {
  // ...
    Wind *w = dynamic_cast<Wind *>(&i);
    if (w != NULL) 
    {
      w->play(middleC);
      return;
    }
    
    Percussion *p = dynamic_cast<Percussion *>(&i);
    if (p != NULL) 
    {
      p->play(middleC);
      return;
    }

    Stringed *s = dynamic_cast<Stringed *>(&i);
    if (s != NULL) 
    {
      s->play(middleC);
      return;
    }

    Brass *b = dynamic_cast<Brass *>(&i);
    if (b != nullptr) 
    {
      b->play(middleC);
      return;
    }

    Woodwind *ww = dynamic_cast<Woodwind *>(&i);
    if (ww != nullptr) ww->play(middleC);
}

int main() {
  Wind flute;
  Percussion drum;
  Stringed violin;
  Brass flugelhorn;
  Woodwind recorder;
  tune(flute);
  tune(drum);
  tune(violin);
  tune(flugelhorn);
  tune(recorder);
  f(flugelhorn);
} ///:~