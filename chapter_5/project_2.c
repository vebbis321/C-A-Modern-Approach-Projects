#include <stdio.h>

int main(void)
{
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    if (hours >= 12 && hours < 24 && minutes >= 0 && minutes <= 60) { 
        printf("Equivalent 12-hour time: %02d:%02d PM\n", hours - 12, minutes);
    }
    else if (hours < 12 && hours <= 0 && minutes >= 0 && minutes <= 60) {
        printf("Equivalent 12-hour time: %02d:%02d AM\n", hours, minutes);
    } else {
        printf("Type error\n");
    }

    return 0;
}