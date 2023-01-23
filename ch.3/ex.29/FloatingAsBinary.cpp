//: C03:FloatingAsBinary.cpp
//{L} printBinary
//{T} 3.14159
#include "printBinary.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
if(argc != 2) {
cout << "Must provide a number" << endl;
exit(1);
}
double d = atof(argv[1]);
unsigned char* cp = reinterpret_cast<unsigned char*>(&d);
string result = "";

for(int i = sizeof(double)-1; i >= 0 ; --i){
result += printBinary(cp[i]);
}

for (int i = 0; i < result.size(); ++i)
{
    if (i == 1 || i == 12)
    {
        cout << " ";
    }
    cout << result[i];
}

cout << endl;
} ///:~
