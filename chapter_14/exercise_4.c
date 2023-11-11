#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define AVG(x, y) (((x) + (y)) / 2.0)
#define AREA(x, y) ((x) * (y))

int main(int argc, char *argv[])
{

    printf("Average problem: %f", AVG(4 * 2, 3));
    printf("Area problem: %d", AREA(4 * 2, 3));

    return EXIT_SUCCESS;
}
