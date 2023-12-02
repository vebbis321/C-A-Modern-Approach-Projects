#include <stdio.h>

#define PUBLIC
#define PRIVATE static

PRIVATE int foo = 2;

void bar() { printf("%d", foo); }

PUBLIC int publicFunc(void) { return 2; }
