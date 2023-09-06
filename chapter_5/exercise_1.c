#include <stdio.h>

int main(void) 
{
    // a)
    int i1 = 2, j1 = 3;
    int k1 = i1 * j1 == 6;
    printf("%d\n", k1); // 1

    // b)
    int i2 = 5, j2 = 10, k2 = 1;
    printf("%d\n", k2 > i2 < j2); // 1

    // c)
    int i3 = 3, j3 = 2, k3 = 1;
    printf("%d\n", i3 < j3 == j3 < k3); // 1

    // d)
    int i4 = 3, j4 = 4, k4 = 5;
    printf("%d\n", i4 % j4 + i4 < k4); // 0

    return 0;
}