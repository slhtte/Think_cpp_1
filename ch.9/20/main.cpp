#include <iostream>
#include <fstream>
#include "../../require.h"
using namespace std;

int main(int argc, char *argv[])
{
	requireArgs(argc, 2);
	int arg = atoi(argv[1]);
	require(arg >= 5 && arg <= 10);
	ifstream in(argv[2]);
	assure(in);
}