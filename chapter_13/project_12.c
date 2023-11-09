#include <stdio.h>

int main(void)
{

    char sentence[30][20 + 1];
    char terminating_char, ch;
    int letter_idx = 0, word_idx = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '.' || ch == '?' || ch == '!') {
            sentence[word_idx][letter_idx] = '\0';
            terminating_char = ch;
            break;
        }
        else if (ch == ' ') {
            sentence[word_idx][letter_idx] = '\0';
            letter_idx = 0;
            word_idx += 1;
        }
        else
            sentence[word_idx][letter_idx++] = ch;
    }

    printf("Reversal of sentence: ");

    while (word_idx >= 0) {
        printf("%s", sentence[word_idx--]);
        if (word_idx >= 0) printf(" ");
    }

    printf("%c\n", terminating_char);

    return 0;
}
