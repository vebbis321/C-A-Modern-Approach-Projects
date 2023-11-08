#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

bool planetscmp(char *argstr, const char *planet);

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                       "Saturn",  "Uranus", "Neptune", "Pluto"};

    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {
            if (planetscmp(argv[i], planets[j])) {
                printf("%s id %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS) printf("%s is not planet\n", argv[i]);
    }

    return 0;
}

bool planetscmp(char *argstr, const char *planet)
{
    if (strlen(argstr) != strlen(planet)) return false;

    int i = 0;

    for (; i < strlen(argstr); i++) {
        if (toupper(argstr[i]) != toupper(planet[i])) return false;
    }

    return true;
}
