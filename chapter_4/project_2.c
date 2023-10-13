#include <stdio.h>

int main(void) {
  int userInput;

  printf("Enter a three-digit number: ");
  scanf("%3d", &userInput);

  int firstDigit = userInput / 100;
  int lastTwoDigits = userInput % 100;
  int middleDigit = lastTwoDigits / 10;
  int lastDigit = lastTwoDigits % 10;

  printf("The reversal is: %d%d%d\n", lastDigit, middleDigit, firstDigit);
}
