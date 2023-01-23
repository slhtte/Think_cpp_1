#include <string>
#include <iostream>
using namespace std;

typedef struct
{
    string s1;
    string s2;
    int i;
}Struct;

int main()
{
    Struct str;
    str.s1 = "String1";
    str.s2 = "String2";
    str.i = 7;
    
    cout << "Struct str(" << str.s1 << ", " << str.s2 << ", " << str.i << ")\n";

    Struct *p_str = &str;
    p_str->s1 = "StringP1";
    p_str->s2 = "stringP2";
    p_str->i  = 15;

    cout << "Struct str(" << p_str->s1 << ", " << p_str->s2 << ", " << p_str->i << ")\n";
}