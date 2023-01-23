#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
  vector<string> v;
  ifstream in("fillvecor.cpp");
  string line;
  while(getline(in, line))
    v.push_back(line); 

  const char Enter = '\n';
  for(int i = 0; i < v.size(); ++i)
  {
    cout << i << ": " << v[i] << endl;
    while (true)
    {
        cout << "Press Enter\n";
        int ch = cin.get();
        if (ch == Enter)
        {
          break;
        }
    }
  }
}