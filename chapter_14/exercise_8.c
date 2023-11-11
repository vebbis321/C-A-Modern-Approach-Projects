#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STRINGIZE(x) #x
#define CALL_STRINGIZE(x) STRINGIZE(x)

#define LINE_FILE                                                              \
    (char[]) { "LINE " CALL_STRINGIZE(__LINE__) " of file " __FILE__ }

int main(int argc, char *argv[])
{
    const char *str = LINE_FILE;
    printf("%s\n", str);

    return EXIT_SUCCESS;
}
