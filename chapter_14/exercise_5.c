#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(int argc, char *argv[])
{

    char s[] = "abcd";
    int i;

    i = 0;

    // a
    // ++i executed three times
    putchar(TOUPPER(s[++i]));

    // b
    // ++i executed two times
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));

    return EXIT_SUCCESS;
}
