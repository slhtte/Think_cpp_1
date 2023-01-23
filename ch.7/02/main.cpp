#include <iostream>
#include <string>
using namespace std;

class Message
{
    string s;
public:
    Message(string default_arg = "default_argument");
    void print();
    void print(string ss);
};

Message::Message(string default_arg)
{
    s = default_arg;
}

void Message::print()
{
    cout << s << endl;
}

void Message::print(string ss)
{
    cout << "call print(" << ss << ")\n";
    cout << s << endl;
}

int main()
{
    Message m("world");
    m.print("Hello");
}
