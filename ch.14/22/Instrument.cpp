//: C14:Instrument.cpp
// ������������ � ���������� ���������� ����
#include <iostream>
using namespace std;

enum note { middleC, Csharp, Cflat }; // Ƞ�.��.

class Instrument {
public:
  virtual void play(note) const { cout << "Instrument::play(note)\n"; }
};

// ������� ����������� ����������� (Wind) �������� ������������ 
// ������������� (Instrument), ��������� �������� ��� �� �����������:
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
  tune(flute); // ���������� ���������� ����
} ///:~