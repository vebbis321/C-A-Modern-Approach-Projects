#include "readline.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 20

int sickComp(const void *p, const void *q);

int main(void)
{
    char *words[100];
    char word[MSG_LEN + 1];
    int i, size;
    for (i = 0; i < 100; i++) {
        printf("IIII: %d\n", i);
        size = read_line(word, MSG_LEN);
        if (size) {
            words[i] = malloc(size);
            if (words[i] == NULL) {
                printf("No space left\n");
                break;
            }
            else
                strcpy(words[i], word);
        }
        else {
            printf("BREAK\n");
            break;
        }
    }

    printf("yoo\n");
    qsort(words, i, sizeof words[0], sickComp);

    printf("In sorted order: ");

    for (int j = 0; j < i; j++) {
        printf("%s ", words[j]);
    }

    printf("\n");

    return 0;
}

int sickComp(const void *p, const void *q)
{
    const char *lh = *(char *const *)p;
    const char *rh = *(char *const *)q;
    return strcmp(lh, rh);
}
