//: C12:OverloadingUnaryOperators.cpp
#include <iostream>
#include "Integer.h"
#include "../../require.h"
using namespace std;

// √лобальные операторы:
const Integer& operator+(const Integer& a) {
  cout << "+Integer\n";
  return a; // ”нарный оператор + ничего не делает
}
const Integer operator-(const Integer& a) {
  cout << "-Integer\n";
  return Integer(-a.i);
}
const Integer operator~(const Integer& a) {
  cout << "~Integer\n";
  return Integer(~a.i);
}
Integer* operator&(Integer& a) {
  cout << "&Integer\n";
  return a.This(); // &a is recursive!
}
int operator!(const Integer& a) {
  cout << "!Integer\n";
  return !a.i;
}
// ѕрефиксна€ верси€; возвращает значение после инкремента
const Integer& operator++(Integer& a) {
  cout << "++Integer\n";
  a.i++;
  return a;
}
// ѕостфиксна€ верси€; возвращает значение перед инкрементом
const Integer operator++(Integer& a, int) {
  cout << "Integer++\n";
  Integer before(a.i);
  a.i++;
  return before;
}
// ѕрефиксна€ верси€; возвращает значение после декремента
const Integer& operator--(Integer& a) {
  cout << "--Integer\n";
  a.i--;
  return a;
}
// ѕостфиксна€ верси€; возвращает значение перед декрементом
const Integer operator--(Integer& a, int) {
  cout << "Integer--\n";
  Integer before(a.i);
  a.i--;
  return before;
}

const Integer
  operator+(const Integer& left,
            const Integer& right) {
  return Integer(left.i + right.i);
}
const Integer
  operator-(const Integer& left,
            const Integer& right) {
  return Integer(left.i - right.i);
}
const Integer
  operator*(const Integer& left,
            const Integer& right) {
  return Integer(left.i * right.i);
}
const Integer
  operator/(const Integer& left,
            const Integer& right) {
  require(right.i != 0, "divide by zero");
  return Integer(left.i / right.i);
}
const Integer
  operator%(const Integer& left,
            const Integer& right) {
  require(right.i != 0, "modulo by zero");
  return Integer(left.i % right.i);
}
const Integer
  operator^(const Integer& left,
            const Integer& right) {
  return Integer(left.i ^ right.i);
}
const Integer
  operator&(const Integer& left,
            const Integer& right) {
  return Integer(left.i & right.i);
}
const Integer
  operator|(const Integer& left,
            const Integer& right) {
  return Integer(left.i | right.i);
}
const Integer
  operator<<(const Integer& left,
             const Integer& right) {
  return Integer(left.i << right.i);
}
const Integer
  operator>>(const Integer& left,
             const Integer& right) {
  return Integer(left.i >> right.i);
}
//  омбинированные операторы присваивани€
// измен€ют и возвращают l-значение:
Integer& operator+=(Integer& left,
                    const Integer& right) {
   if(&left == &right) {/* самоприсваивание */}
   left.i += right.i;
   return left;
}
Integer& operator-=(Integer& left,
                    const Integer& right) {
   if(&left == &right) {/* самоприсваивание */}
   left.i -= right.i;
   return left;
}
Integer& operator*=(Integer& left,
                    const Integer& right) {
   if(&left == &right) {/* самоприсваивание */}
   left.i *= right.i;
   return left;
}
Integer& operator/=(Integer& left,
                    const Integer& right) {
   require(right.i != 0, "divide by zero");
  if(&left == &right) {/* самоприсваивание */}
left.i /= right.i;
return left;
}
Integer& operator%=(Integer& left,
const Integer& right) {
require(right.i != 0, "modulo by zero");
if(&left == &right) {/* самоприсваивание */}
left.i %= right.i;
return left;
}
Integer& operator^=(Integer& left,
const Integer& right) {
if(&left == &right) {/* самоприсваивание */}
left.i ^= right.i;
return left;
}
Integer& operator&=(Integer& left,
const Integer& right) {
if(&left == &right) {/* самоприсваивание */}
left.i &= right.i;
return left;
}
Integer& operator|=(Integer& left,
const Integer& right) {
if(&left == &right) {/* самоприсваивание */}
left.i |= right.i;
return left;
}
Integer& operator>>=(Integer& left,
const Integer& right) {
if(&left == &right) {/* самоприсваивание */}
left.i >>= right.i;
return left;
}
Integer& operator<<=(Integer& left,
const Integer& right) {
if(&left == &right) {/* самоприсваивание */}
left.i <<= right.i;
return left;
}
// ”словные операторы возвращают true или false:
int operator==(const Integer& left,
const Integer& right) {
return left.i == right.i;
}
int operator!=(const Integer& left,
const Integer& right) {
return left.i != right.i;
}
int operator<(const Integer& left,
const Integer& right) {
return left.i < right.i;
}
int operator>(const Integer& left,
const Integer& right) {
return left.i > right.i;
}
int operator<=(const Integer& left,
const Integer& right) {
return left.i <= right.i;
}
int operator>=(const Integer& left,
const Integer& right) {
return left.i >= right.i;
}
int operator&&(const Integer& left,
const Integer& right) {
return left.i && right.i;
}
int operator||(const Integer& left,
const Integer& right) {
return left.i || right.i;
}

// ‘ункции классов (с не€вным аргументом "this"):
class Byte {
  unsigned char b;
public:
  Byte(unsigned char bb = 0) : b(bb) {}
  // ѕобочные эффекты отсутствуют: константна€ функци€ класса:

};