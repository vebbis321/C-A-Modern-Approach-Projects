
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int getScrabblePoints(char ch);
int compute_scrabble_value(const char *word);

int main(void)
{
    char word[50];
    int points = 0;
    printf("Enter a word: ");
    scanf("%s", word);

    printf("Scrabble value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int i, sum = 0;

    for (i = 0; i < strlen(word); i++)
        sum += getScrabblePoints(word[i]);

    return sum;
}

int getScrabblePoints(char ch)
{
    switch (toupper(ch)) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U': return 1;
    case 'D':
    case 'G': return 2;
    case 'B':
    case 'C':
    case 'M':
    case 'P': return 3;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y': return 4;
    case 'K': return 5;
    case 'J':
    case 'X': return 8;
    case 'Q':
    case 'Z': return 10;
    default: return 0;
    }
}
