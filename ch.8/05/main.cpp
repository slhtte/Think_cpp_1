#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t raw_time;
    time(&raw_time);
    const time_t time_c = raw_time;
    cout << "Time was read...\n";
    //sleep(3);
    time(&raw_time);
    time_c = raw_time;
}