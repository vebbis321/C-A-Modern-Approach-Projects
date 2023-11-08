#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20 + 1];
    char smallest_word[20 + 1] = "", largest_word[20 + 1] = "";

    for (;;) {
        printf("Enter word: ");
        scanf("%s", word);

        if (strlen(word) == 4)
            break;
        else if (strcmp(word, smallest_word) < 0 ||
                 strcmp(smallest_word, "") == 0)
            strcpy(smallest_word, word);
        else if (strcmp(word, largest_word) > 0)
            strcpy(largest_word, word);
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
