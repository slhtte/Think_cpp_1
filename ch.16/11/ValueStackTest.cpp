//: C16:ValueStackTest.cpp
//{L} SelfCounter
#include "ValueStack.h"
#include "SelfCounter.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<SelfCounter> sc;
  for(int i = 0; i < 10; i++)
    sc.push_back(SelfCounter(i));
  // Âûïîëíÿòü peek() ìîæíî, ðåçóëüòàòîì ÿâëÿåòñÿ âðåìåííûé îáúåêò:
  cout << sc[sc.size() - 1] << endl;
  for(int k = 0; k < 10; k++)
  {
    cout << sc[sc.size() - 1] << endl;
    sc.resize(sc.size() - 1);
   }
} ///:~