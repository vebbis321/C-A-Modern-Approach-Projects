#include <math.h>
#include <stdio.h>

#define GENERIC_MAX(type)                                                      \
    type type##_max(type x, type y) { return x > y ? x : y; }

// GENERIC_MAX(long)
//  GENERIC_MAX(unsigned long) two words will create an invlaid func
//  solution is to set unsigned before decleration:
unsigned GENERIC_MAX(long)

    int main(int argc, char *argv[])
{
    int i;
    return 0;
}
