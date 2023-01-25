#include <iostream>
#include <fstream>
#include "../../require.h"
using namespace std;

#define IFOPEN(VAR,NAME) \
    ifstream VAR(NAME); \
    assure(VAR,NAME)

int main(int argc, char *argv[])
{
	requireArgs(argc, 1);
	IFOPEN(in, argv[1]);
}