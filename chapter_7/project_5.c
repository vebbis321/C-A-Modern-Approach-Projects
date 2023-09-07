#include <ctype.h>
#import <stdio.h>


int getScrabblePoints(char ch);

int main(void)
{
    char ch;
    int points = 0;
    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') { 
        points += getScrabblePoints(ch);
    }

    printf("Scrabble value: %d\n", points);

    return 0;
}

int getScrabblePoints(char ch)
{
    switch (toupper(ch)) {
        case 'A': case 'E': case 'I': case 'L': case 'N': 
        case 'O': case 'R': case 'S': case 'T': case 'U': 
            return 1;
        case 'D': case 'G':
            return 2;
        case 'B': case 'C': case 'M': case 'P':
            return 3;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            return 4;
        case 'K':
            return 5;
        case 'J': case 'X':
            return 8;
        case 'Q': case 'Z':
            return 10;
        default: return 0;
    }

}
