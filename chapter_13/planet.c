#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars",  "Jupiter",
                       "Saturn",  "Uranus", "Neptune", "Plutoa"};

    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s id %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS) printf("%s is not planet\n", argv[i]);
    }

    return 0;
}
