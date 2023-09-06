#include <stdio.h>

int main(void)
{ 
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        printf("%10ld          %10ld\n", i, i * i);
    
    return 0;
}

// 46341 is a overflow since the root of 2,147,483,647 (2^31 - 1) is 46340.9. Any value
// bigger will result in a overflow.
// 3037000499 + 1 is a overflow since the root of (2^64 - 1) is 3037000499.9 Any value
// bigger will result in a overflow.

