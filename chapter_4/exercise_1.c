#include <stdio.h>

int main (void)
{
    int i1 = 5;
    int j1 = 3;

    int i2 = 2;
    int j2 = 3;

    int i3 = 7;
    int j3 = 8;
    int k = 9;

    int i4 = 1;
    int j4 = 2;
    int k2 = 3;

    // a)
    printf("%d %d\n", i1 / j1, i1 % j1);

    // b)
    printf("%d\n", (i2 + 10) % j2);

    // c)
    printf("%d\n", (i3 + 10) % k / j3);

    // d)
    printf("%d\n", (i4 + 5) % (j4 + 2) / k);

}