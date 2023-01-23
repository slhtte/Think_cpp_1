#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Text
{
    string file;
public:
    Text();
    Text(string file_name);
    string contents();
};

Text::Text()
{
    cout << "Text::constructor() called...";
}

Text::Text(string file_name)
{
    ifstream in(file_name);
    string tmp = "";
    while (getline(in,tmp))
    {
        file += tmp + "\n";
    }
}

string Text::contents()
{
    return file;
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "USAGE!!! you need input file_name\n";
        exit(1);
    }

    Text text(argv[1]);
    cout << text.contents() << endl << endl;
}
