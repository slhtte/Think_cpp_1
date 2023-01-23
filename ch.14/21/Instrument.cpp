//: C14:Instrument.cpp
// ������������ � ���������� ���������� ����
#include <iostream>
using namespace std;

enum note { middleC, Csharp, Cflat }; // Ƞ�.��.

class Instrument {
public:
  void play(note) const {}
  void prepare() const { cout << "Instrument::prepare()...\n"; }
};

// ������� ����������� ����������� (Wind) �������� ������������ 
// ������������� (Instrument), ��������� �������� ��� �� �����������:
class Wind : public Instrument {};

void tune(Instrument& i) {
  // ...
  i.play(middleC);
  i.prepare();
}

int main() {
  Wind flute;
  tune(flute); // ���������� ���������� ����
} ///:~