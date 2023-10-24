#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{

    int word_check[26] = {0};
    char ch;
    bool isAnagaram = false;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            int letter = tolower((ch - 97));
            word_check[letter] += 1;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            int letter = tolower((ch - 97));
            word_check[letter] -= 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (word_check[i] != 0)
            break;
        if (i == 25)
            isAnagaram = true;
    }

    printf("Is anagram: %s\n", isAnagaram ? "true" : "false");

    return 0;
}
