//: C12:Byte.h
// Ïåðåãðóçêà îïåðàòîðîâ â ôîðìå ôóíêöèé êëàññà
#ifndef BYTE_H
#define BYTE_H
#include "../../require.h"
#include <iostream>
// Ôóíêöèè êëàññîâ (ñ íåÿâíûì àðãóìåíòîì "this"):

using std::cout;

class Byte {
unsigned char b;
public:
Byte(unsigned char bb = 0) : b(bb) {}
// Ïîáî÷íûå ýôôåêòû îòñóòñòâóþò: êîíñòàíòíàÿ ôóíêöèÿ êëàññà:
const Byte
operator+(const Byte& right) const {
return Byte(b + right.b);
}
const Byte
operator-(const Byte& right) const {
return Byte(b - right.b);
}
const Byte
operator*(const Byte& right) const {
return Byte(b * right.b);
}
const Byte
operator/(const Byte& right) const {
require(right.b != 0, "divide by zero");
return Byte(b / right.b);
}
const Byte
operator%(const Byte& right) const {
require(right.b != 0, "modulo by zero");
return Byte(b % right.b);
}
const Byte
operator^(const Byte& right) const {
return Byte(b ^ right.b);
}
const Byte
operator&(const Byte& right) const {
return Byte(b & right.b);
}
const Byte
operator|(const Byte& right) const {
return Byte(b | right.b);
}
const Byte
operator<<(const Byte& right) const {
return Byte(b << right.b);
}
const Byte
operator>>(const Byte& right) const {
return Byte(b >> right.b);
}
// Êîìáèíèðîâàííûå îïåðàòîðû ïðèñâàèâàíèÿ
// èçìåíÿþò è âîçâðàùàþò l-çíà÷åíèå:
// îïåðàòîð = ìîæåò áûòü òîëüêî ôóíêöèåé êëàññà:
Byte& operator=(const Byte& right) {
// Ñàìîïðèñâàèâàíèå:
if(this == &right) return *this;
b = right.b;
return *this;
}
Byte& operator+=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b += right.b;
return *this;
}
Byte& operator-=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b -= right.b;
return *this;
}
Byte& operator*=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b *= right.b;
return *this;
}
Byte& operator/=(const Byte& right) {
require(right.b != 0, "divide by zero");
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b /= right.b;
return *this;
}
Byte& operator%=(const Byte& right) {
require(right.b != 0, "modulo by zero");
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b %= right.b;
return *this;
}
Byte& operator^=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b ^= right.b;
return *this;
}
Byte& operator&=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b &= right.b;
return *this;
}
Byte& operator|=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b |= right.b;
return *this;
}
Byte& operator>>=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b >>= right.b;
return *this;
}
Byte& operator<<=(const Byte& right) {
if(this == &right) {/* ñàìîïðèñâàèâàíèå */}
b <<= right.b;
return *this;
}
// Óñëîâíûå îïåðàòîðû âîçâðàùàþò true èëè false:
int operator==(const Byte& right) const {
return b == right.b;
}
int operator!=(const Byte& right) const {
return b != right.b;
}
int operator<(const Byte& right) const {
return b < right.b;
}
int operator>(const Byte& right) const {
return b > right.b;
}
int operator<=(const Byte& right) const {
return b <= right.b;
}
int operator>=(const Byte& right) const {
return b >= right.b;
}
int operator&&(const Byte& right) const {
return b && right.b;
}
int operator||(const Byte& right) const {
return b || right.b;
}

  const Byte& operator+() const {
    cout << "+Byte\n";
    return *this;
  }
  const Byte operator-() const {
    cout << "-Byte\n";
    return Byte(-b);
  }
  const Byte operator~() const {
    cout << "~Byte\n";
    return Byte(~b);
  }
  Byte operator!() const {
    cout << "!Byte\n";
    return Byte(!b);
  }
  Byte* operator&() {
    cout << "&Byte\n";
    return this;
  }
  // Ïîáî÷íûå ýôôåêòû; íåêîíñòàíòíàÿ ôóíêöèÿ êëàññà
  const Byte& operator++() { // Ïðåôèêñíàÿ âåðñèÿ
    cout << "++Byte\n";
    b++;
    return *this;
  }
  const Byte operator++(int) { // Ïîñòôèêñíàÿ âåðñèÿ
    cout << "Byte++\n";
    Byte before(b);
    b++;
    return before;
  }
  const Byte& operator--() { // Ïðåôèêñíàÿ âåðñèÿ
    cout << "--Byte\n";
    --b;
    return *this;
  }
  const Byte operator--(int) { // Ïîñòôèêñíàÿ âåðñèÿ
    cout << "Byte--\n";
    Byte before(b);
    --b;
    return before;
  }

// Âûâîä ñîäåðæèìîãî â âûõîäíîé ïîòîê:
void print(std::ostream& os) const {
os << "0x" << std::hex << int(b) << std::dec;
}
};
#endif // BYTE_H ///:~