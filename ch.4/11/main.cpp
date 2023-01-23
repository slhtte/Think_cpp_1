#include <iostream>
using namespace std;

int main()
{
#ifdef FLAG
    cout << "FLAG is defined...\n";
#else
    cout << "nothing is define...\n";
#endif
}
