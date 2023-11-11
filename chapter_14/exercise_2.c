#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(int argc, char *argv[])
{
    int a[5] = {0};

    printf("Size: %lu", NELEMS(a));
    return 0;
}
