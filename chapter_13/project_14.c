#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{

    char word1[30], word2[30];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    printf("Is anagram: %s\n", are_anagrams(word1, word2) ? "true" : "false");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int word_check[26] = {0}, *p;

    if (strlen(word1) != strlen(word2)) return false;

    while (*word1) {

        word_check[toupper(*word1) - 65] += 1;
        word_check[toupper(*word2) - 65] -= 1;

        word1++;
        word2++;
    }

    for (p = word_check; p < word_check + 26; p++) {
        if (*p != 0) return false;
    }

    return true;
}
