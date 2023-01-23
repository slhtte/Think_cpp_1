//: C03:Rotation.cpp {O}
// Циклический сдвиг влево и вправо
#include "Rotation.h"

unsigned char rol(unsigned char val) {
int highbit;
if(val & 0x80) // 0x80 - маска, в которой установлен только старший бит
highbit = 1;
else
highbit = 0;
// Сдвиг влево (младший бит становится равным 0):
val <<= 1;
// Ввод старшего бита в младший бит:
val |= highbit;
return val;
}

unsigned char ror(unsigned char val) {
int lowbit;
if(val & 1) // Проверка младшего бита
lowbit = 1;
else
lowbit = 0;
val >>= 1; // Сдвиг вправо на одну позицию
// Ввод младшего бита в старший бит:
val |= (lowbit << 7);
return val;
} ///:~