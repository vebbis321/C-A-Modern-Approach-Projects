#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR(s, i) (fprintf(stderr, (s), (index)))

int main(int argc, char *argv[])
{
    int index;
    ERROR("Range error: index = %d\n", index);
    return EXIT_SUCCESS;
}
