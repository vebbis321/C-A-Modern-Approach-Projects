#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(int argc, char *argv[])
{
    IDENT(foo);
    // _Pragma( #("ident" "\"foo\"" => ident "foo)) will get stringized before
    // _Pragma by # and then destringized by _Pragma
    return EXIT_SUCCESS;
}
