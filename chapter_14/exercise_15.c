#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// #define ENGLISH "Insert disk 1"
#define FRENCH "Inserez Le Disque 1"
//  #define SPANISH "Inserte El Disco 1"

int main(int argc, char *argv[])
{
#if defined(ENGLISH)
    printf("%s\n", ENGLISH);
#elif defined(FRENCH)
    printf("%s\n", FRENCH);
#elif defined(SPANISH)
    printf("%s\n", SPANISH);
#endif /* ifdef ENGLISH                                                        \
    printf("%s", ENGLISH);                                                     \
    #elifdef  */

    return EXIT_SUCCESS;
}
