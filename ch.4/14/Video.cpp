#include "Video.h"
#include <iostream>
using namespace std;

void Video::init(string n, int p)
{
    name = n;
    price = p;
    have = true;
}

bool Video::is_have()
{
    return have;
}

void Video::give()
{
    if (!have)
    {
        cout << "Sorry, but we don't have this video...\n";
        return;
    }

    have = false;
    return;
}

void Video::take()
{
    if (have)
    {
        cout << "We have this video already...\n";
    }

    have = false;
    return;
}

void Video::print()
{
    string have_it = have ? ", we have it"
                          : ", we don't have it";

    cout << "Video's name is " << name
         << ", prise is "      << price
                               << have_it
                               << endl;
}
