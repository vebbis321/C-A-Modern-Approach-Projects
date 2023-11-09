#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_vowel_count(const char *sentence);
void read_line(char str[], int n);

int main(void)
{
    char sentence[20];

    printf("Enter a sentence: ");
    read_line(sentence, 20);

    printf("Vovels: %d\n", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{

    int i, count = 0;
    for (i = 0; i < strlen(sentence); i++) {

        switch (toupper(sentence[i])) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': count++;
        }
    }

    return count;
}

void read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n) str[i++] = ch;

    str[i] = '\0';
}
