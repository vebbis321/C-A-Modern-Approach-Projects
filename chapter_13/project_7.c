#include <stdio.h>
#include <string.h>

int main(void)
{
    int number, tens, ones;

    char *ones_strs[] = {"",     "one", "two",   "three", "four",
                         "five", "six", "seven", "eight", "nine"};

    char *one_with_tens_strs[] = {"ten",      "eleven",  "twelve",  "thirteen",
                                  "fourteen", "fifteen", "sixteen", "seventeen",
                                  "eighteen", "nineteen"};

    char *tens_strs[] = {"twenty", "thirty",  "forty",  "fifty",
                         "sixty",  "seventy", "eighty", "ninety"};

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("Error, please enter a number with only two digits.");
        return 0;
    }

    tens = number / 10;
    ones = number % 10;

    printf("You entered the number ");

    if (tens == 1)
        printf("%s.", one_with_tens_strs[ones]);
    else {

        printf("%s", tens_strs[tens - 2]);

        if (ones != 0) printf("-%s", ones_strs[ones]);
        printf(".");
    }

    printf("\n");

    return 0;
}
