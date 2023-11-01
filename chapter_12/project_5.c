#include <ctype.h>
#include <stdio.h>

int main(void)
{

    char arr[100];
    char terminating_char, ch;
    char *p = arr;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminating_char = ch;
            break;
        }
        else {
            *p++ = ch;
        }
    }

    printf("Reversal of sentence: ");

    char *q;

    for (p -= 1; p >= arr; p--) {

        if (*p == ' ') {
            for (q = p + 1; isalpha(*q); q++) {
                printf("%c", *q);
            }
            printf(" ");
        }
        else if (p == arr) {
            for (q = p; isalpha(*q); q++) {
                printf("%c", *q);
            }
        }
    }

    printf("%c\n", terminating_char);

    return 0;
}
