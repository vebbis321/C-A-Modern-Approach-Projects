#include <stdio.h>

int main(void)
{
    // a)   
    int i1 = 7; int j1 = 8;
    i1 *= j1 + 1;
    printf("%d %d\nh", i1, j1); // 63 8

    // b)
    int i2, j2; int k2 = 1;
    i2 += j2 += k2;
    printf("%d %d %d\n", i2, j2, k2); // garbage and 1, 1?
    
    // c)
    int i3 = 1; int j3 = 2; int k3 = 3;
    i3 -= j3 -= k3;
    printf("%d %d %d\n", i3, j3, k3); // 2 -1 3

    // d) 
    int i4 = 2; int j4 = 1; int k4 = 0;
    i4 *= j4 *= k4;
    printf("%d %d %d\n", i4, j4, k4); // 0 0 0

}