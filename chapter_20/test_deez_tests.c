#include <stdio.h>

#define BLUE 1
#define GREEN 2
#define RED 4

int main(void)
{
    int x = 9;

    printf("x << 2: %d\n", x << 2);
    printf("x >> 2: %d\n", x >> 2);
    printf("~x: %d\n", ~x);
    printf("x & 2: %d\n", x & 2);
    printf("x | 1: %d\n", x | 1);
    printf("x ^ 1: %d\n", x ^ 1);

    int i = 4;
    i = i << 2 + 1; // which means i << (2 + 1)

    i = i ^ 2 & ~1; // which means i ^ (2 & (~1))
    // ~, &, ^, | ... precedence (highest to lowest)

    // compund assignment:
    i *= 2;
    i ^= 2; // i = i ^ 2

    // mask bit 4 of j
    // 0000
    unsigned int j = 0x0000;
    printf("j: %d\n", j);
    // 1000
    j |= 0x0010;
    printf("j: %d\n", j);

    j = 5;
    unsigned int k;
    // sets bit j
    k |= 1 << j; // position 5 is 32 in binary
    k |= 1 << 4; // position 4 is 16 in binary
    //
    // idiom for turning on bit at idx

    printf("k: %d\n", k); // 32 + 16

    // to clear a bit at idx
    k &= ~(1 << j); // clears bit at idx j (5)

    printf("k: %d\n", k); // k is now 16; 5 is "turned off"

    // check if bit at idx is set
    // set it back first
    k |= 1 << j;
    if (k & 1 << j) printf("Bit at idx 5 is turned on!\n");
    if (k & 1 << 4) printf("Bit at idx 4 is turned on!\n");

    // with macros...
    i |= BLUE;                          // sets blue bit
    i &= ~(BLUE | GREEN);               // clears blue and green bits
    if (i & (BLUE | GREEN)) printf(""); // tests blue and green bits

    return 0;
}
