#include <stdio.h>

int main(void)
{
    float userInput, largestNum = 0;

    do {
        printf("Enter a number: "); 
        scanf("%f", &userInput);

        if (userInput > largestNum) { 
            largestNum = userInput;
        }
    } while (userInput > 0);

    printf("The largest number entered was: %.2f\n", largestNum);

    return 0;
}