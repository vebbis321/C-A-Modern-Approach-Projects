#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define CHECK_COMPARE(x, n) (0 < (x) && (x) < ((n)-1))
#define CHECK(x, y, n) ((CHECK_COMPARE(x, n) && CHECK_COMPARE(y, n)) ? 1 : 0)
#define MEDIAN(x, y, z)                                                        \
    ((x) >= (y) ? ((x) >= (z) ? ((z) >= (y) ? (z) : (y)) : (x))                \
                : ((y) >= (z) ? (z) : (y)))
#define POLYNOMIAL(x)                                                          \
    (3 * (pow((x), 5)) + 2 * (pow((x), 4)) - 5 * (pow((x), 3)) - pow((x), 2) + \
     (7 * (x)) - 6)

int main(int argc, char *argv[])
{
    printf("check: %d\n", CHECK(2, 3, 10));
    printf("median: %d\n", MEDIAN(2, 2, 3));
    printf("pol: %lf\n", POLYNOMIAL(2));
    return EXIT_SUCCESS;
}
