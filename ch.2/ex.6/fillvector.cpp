#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
  vector<string> v;
  ifstream in("fillvector.cpp");
  string line;
  while(getline(in, line))
  {
    v.push_back(line); 
  }
  string final_str;
  for(int i = 0; i < v.size(); ++i)
  {
    final_str += v[i] + " ";
  }

  cout << "FINAL_STR:\n" << final_str << endl;
}