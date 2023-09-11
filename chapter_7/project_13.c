#import <stdio.h>

int main(void) 
{
    char ch;
    float letters = 0;
    int word = 0;

    printf("Enter a sentence: ");

    do {
        ch = getchar();
        if (ch != ' ' || ch == '.') letters++;
        if (ch == ' ' || ch == '.') word++;
        printf("ch: %c\n", ch);
        printf("Words: %d\n", word);
    } while (ch != '.');

    printf("letters: %f", letters);
    printf("words: %d", word);

    printf("Average word count: %.1f", letters / word);

    return 0;

}
