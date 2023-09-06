#include <stdio.h>

int main(void)
{ 
    int userInput;

    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &userInput);

    int lastDigit = userInput % 8;
    int secondLastDigit = (userInput /= 8) % 8;
    int middleDigit = (userInput /= 8) % 8;
    int secondDigit = (userInput /= 8) % 8;
    int firstDigit = (userInput /= 8) % 8;

    printf("In octal your number is: %d%d%d%d%d\n",
    firstDigit, secondDigit, middleDigit, secondLastDigit, lastDigit);


    return 0;
}