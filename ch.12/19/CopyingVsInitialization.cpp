//: C12:CopyingVsInitialization.cpp
#include <iostream>
using namespace std;

class Fi {
public:
Fi() { cout << "Fi::Fi()\n"; }
};

class Fee {
public:
Fee(int) { cout << "Fee::Fee(int)\n"; }
Fee(const Fi&) { cout << "Fee::Fee(const Fi&)\n"; }
};

int main() {
Fee fee = 1; // Fee(int)
Fi fi;
Fee fum(fi); // Fee(Fi)
} ///:~