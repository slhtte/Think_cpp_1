#include "new_struct.h"

int main(int argc, char** argv)
{
    New_struct s;
    s.push(argv[1]);
    s.print();
}
