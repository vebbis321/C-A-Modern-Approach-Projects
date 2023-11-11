#include <stdio.h>
#include <stdlib.h>

// 1a
#define CUBE(x) (x * x * x)
// 1b
#define REMAINDER_OF_4(n) (n % 4)
// 1c
#define PRODUCT_COND(x, y) ((x) * (y) < 100 ? 1 : 0)

int main(int argc, char *argv[])
{

    int x = 2;
    int n = 8;

    printf("Cube: %d\n", CUBE(x));
    printf("Remainder: %d\n", REMAINDER_OF_4(n));
    printf("Product: %d\n", PRODUCT_COND(x, n));

    return EXIT_SUCCESS;
}
