#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatticat(const char *s1, const char *s2)
{
    char *daPointa;
    daPointa = malloc(strlen(s1) + strlen(s2) + 1);

    if (daPointa == NULL) {
        printf("Go nuuuutz");
        exit(EXIT_FAILURE);
    }
    strcpy(daPointa, s1);
    strcat(daPointa, s2);
    return daPointa;
}

char *dynymic_inputz(const char *text)
{
    int n = strlen(text);
    char *pointrr = malloc(n + 1);

    if (pointrr == NULL) {
        printf("Yes");
        exit(EXIT_FAILURE);
    }

    return pointrr;
}

int main(void)
{

    int *array_of_int = malloc(4 * sizeof(int));
    int *array_of_int_call = calloc(4, sizeof(int));

    if (array_of_int == NULL) { printf("SHAZAM!\n"); }

    printf("%d\n", array_of_int[0]);
    printf("%d\n", array_of_int_call[0]);

    printf("%lu\n", sizeof(array_of_int));
    printf("%lu\n", sizeof(array_of_int_call));

    array_of_int[0] = 1;
    array_of_int[1] = 6;
    array_of_int[2] = 8;
    array_of_int[3] = 2;

    printf("%lu\n", sizeof(array_of_int));
    free(array_of_int);
    printf("%lu\n", sizeof(array_of_int));

    int *new_ptr = realloc(array_of_int_call, sizeof(int) * 5);
    free(array_of_int_call);

    printf("%lu\n", sizeof(new_ptr));

    char *str_p = malloc((sizeof(char) * 4) + 1);
    strcpy(str_p, "wutt");
    int *int_p = malloc(sizeof(int) * 3);

    int_p[0] = 88;
    int_p[1] = 77;
    int_p[2] = 66;

    // for (int i = 0; i < 100; i++)
    //     printf("%d\n", int_p[i]);

    char *nice = concatticat("blue", "balls");
    printf("%s", nice);

    free(nice);

    typedef struct {
        char *name;
        char *userName;
        int age;
    } User;

    User *callocDeezNutz = calloc(1, sizeof(User));

    int *p = malloc(sizeof(int) * 3);
    int *gabbage = malloc(sizeof(int) * 3);

    gabbage = p; // memory of gabbage is wasted. a gabbae collector would be
                 // useful here
}
