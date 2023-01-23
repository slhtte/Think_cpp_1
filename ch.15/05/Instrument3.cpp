//: C15:Instrument3.cpp
// ������� ���������� � �������� ������ virtual
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Cflat }; // Ƞ�.��.

class Instrument {
public:
  virtual void play(note) const {
    cout << "Instrument::play" << endl;
  }

  virtual void prepare() const { cout << "Instrument::prepare()\n"; }
};

// ������� ����������� ����������� (Wind) �������� ������������ 
// ������������� (Instrument), ��������� �������� ��� �� �����������:
class Wind : public Instrument {
public:
  // ��������������� ������������ �������:
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
  tune(flute); // ���������� ���������� ����
} ///:~