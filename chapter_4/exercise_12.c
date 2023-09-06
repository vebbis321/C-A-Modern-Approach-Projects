#include <stdio.h>

int main(void)
{
    // a)
    int i1 = 5;
    int j1 = i1++ * 3 - 2;
    printf("%d %d\n", i1, j1); // 6 13

    // b)
    int i2 = 5;
    int j2 = 3 - 2 * i2++;
    printf("%d %d\n", i2, j2); // 6 -7

    // c)
    int i3 = 7;
    int j3 = 3 * i3-- + 2;
    printf("%d %d\n", i3, j3); // 6 23

    // d)
    int i4 = 7;
    int j4 = 3 + --i4 * 2;
    printf("%d %d\n", i4, j4); // 6 15
}