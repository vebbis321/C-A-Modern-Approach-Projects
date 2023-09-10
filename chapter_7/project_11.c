#import <stdio.h>
#import <stdbool.h>

int main(void)
{
    bool isLastName = false;
    char ch, first_letter; int i = 0;

    printf("Enter first and last name: ");

    for (; (ch = getchar()) != '\n'; i++) {
        if (i == 0) first_letter = ch;
        else if (ch == ' ') isLastName = true;
        else if (isLastName) printf("%c", ch);
    }

    printf(", %c.\n", first_letter);

    return 0;
}
