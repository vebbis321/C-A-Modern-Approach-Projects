#include <stdio.h>

int main(void) 
{
    // a)
    int i1 = 6;
    int j1 = i1 += i1;
    printf("%d %d\n", i1, j1); // 12 12

    // b)
    int i2 = 5;
    int j2 = (i2 -= 2) + 1;
    printf("%d %d\n", i2, j2); // 3 4

    // c)
    int i3 = 7;
    int j3 = 6 + (i3 = 2.5);
    printf("%d d\n", i3, j3); // 2 8

    // d)
    int i4 = 2; int j4 = 8;
    j4 = (i4 = 6) + (j4 = 3);
    printf("%d %d\n", i4, j4); // 6 9
}