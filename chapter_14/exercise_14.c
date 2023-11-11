#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 10
#define INC(x) x + 1

int main(int argc, char *argv[])
{
    int a[N], i, j, k, m;

#ifdef N
    i = j;

#endif /* ifdef N                                                                \
        i = j;                                                                   \
                                                                               \ \
    */
    i = 10 * INC(j);
    printf("%d", i);

    return EXIT_SUCCESS;
}
