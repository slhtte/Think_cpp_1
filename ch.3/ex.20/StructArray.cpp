//: C03:StructArray.cpp
// Массив структур
#include <iostream>
using namespace std;

typedef struct {
int i, j, k;
} ThreeDpoint;

int main() {
ThreeDpoint p[10];
cout << "sizeof(ThreeDpoint) = " << sizeof(ThreeDpoint) << endl;
for(int i = 0; i < 10; i++) {
p[i].i = i + 1;
p[i].j = i + 2;
p[i].k = i + 3;

cout << "&p[" << i << "] = " << (long)&p[i] << endl;
}
} ///:~