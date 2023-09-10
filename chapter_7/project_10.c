#include <ctype.h>
#import <stdio.h>

int main(void)
{
    int count = 0;
    char ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }

    printf("Vovels: %d\n", count);

}
