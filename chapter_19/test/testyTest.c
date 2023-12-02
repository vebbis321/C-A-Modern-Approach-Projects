#include "foo.h"

#define PUBLIC
#define PRIVATE static

PRIVATE int foo = 2;

PUBLIC int publicFunc(void) { return 2; }

int main(void)
{

    FOO foo1, foo2;

    bar(foo1);
    bar(foo2);
}
