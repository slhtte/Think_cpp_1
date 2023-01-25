//: C10:UnnamedNamespaces.cpp
#ifndef _UNNAMED_H_
#define _UNNAMED_H_

namespace Unnamed
{
  class Arm  { /* ... */ };
  class Leg  { /* ... */ };
  class Head { /* ... */ };
  class Robot {
    Arm arm[4];
    Leg leg[16];
    Head head[3];
    // ...
  } xanthan;
  int i, j, k;
}


#endif