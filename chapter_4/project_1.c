#include <stdio.h>

int main(void)
{
    int userInput;

    printf("Enter a two-digit number: ");
    scanf("%2d", &userInput);

    int lastDigit = userInput % 10;
    int firstDigit = userInput / 10;

    printf("The reversal is: %d%d\n", lastDigit, firstDigit);
}