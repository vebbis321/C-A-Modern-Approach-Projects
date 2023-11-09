#include <stdio.h>
#include <string.h>

double compute_average_word_length(const char *sentence);
void read_line(char str[], int n);

int main(void)
{
    char sentence[100];

    printf("Enter a sentence: ");
    read_line(sentence, 100);

    printf("Average word length: %.1f\n",
           compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    float letters = 0;
    int word = 0;

    while (*sentence) {
        if (*sentence != ' ' || *sentence == '.') letters++;
        if (*sentence == ' ' || *sentence == '.') word++;
        printf("Words: %d\n", word);
        sentence++;
    }

    return letters / word;
}

void read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n) str[i++] = ch;

    str[i] = '\0';

    return;
}
