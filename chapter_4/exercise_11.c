#include <stdio.h>

int main(void)
{
    // a)
    int i1 = 1;
    printf("%d ", i1++ - 1); // 0
    printf("%d\n", i1); // 2 

    // b)
    int i2 = 10; int j2 = 5;
    printf("%d ", i2++ - ++j2); // 4 
    printf("%d %d\n", i2, j2); // 11 6

    // c)
    int i3 = 7; int j3 = 8;
    printf("%d ", i3++ - --j3); // 0
    printf("%d %d\n", i3, j3); // 8 7

    // d)
    int i4 = 7;
    int j4 = 3 + --i4 * 2;
    printf("%d %d\n", i4, j4); // 6 15 
}