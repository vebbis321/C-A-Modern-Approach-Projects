#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);

int main(void)
{

    int word1_check[26] = {0};
    int word2_check[26] = {0};
    bool isAnagaram = false;

    printf("Enter first word: ");
    read_word(word1_check);

    printf("Enter second word: ");
    read_word(word2_check);

    printf("Is anagram: %s\n",
           equal_array(word1_check, word2_check) ? "true" : "false");

    return 0;
}

void read_word(int counts[26])
{
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            int letter = tolower((ch - 97));
            counts[letter] += 1;
        }
    }
}

bool equal_array(int counts[26], int counts2[26])
{

    for (int i = 0; i < 26; i++) {
        if (counts[i] != counts2[i])
            return false;
    }

    return true;
}
