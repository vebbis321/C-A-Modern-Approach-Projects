#include <stdio.h>
#include <stdlib.h>

#define DOUBLE(x) (2 * (x))

int main(int argc, char *argv[])
{
    printf("%d", DOUBLE(1 + 2));
    printf("%d", 4 / DOUBLE(2));

    return EXIT_SUCCESS;
}
