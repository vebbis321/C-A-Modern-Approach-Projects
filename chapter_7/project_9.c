#import <stdio.h>

int main(void)
{

    int hour, minute, mins_since_midnight;
    char am_pm[2];
    printf("Please enter a time(hh:mm AM/PM): ");
    scanf("%2d:%2d %s", &hour, &minute, am_pm);

    if (am_pm[0] == 'p' || am_pm[0] == 'P') { 
        hour += 12;
        if (hour == 24) hour = 0;
        printf("In 24 hour fomat: %2d:%2d", hour, minute);
    } else { 
        printf("In 24 hour fomat: %2d:%2d", hour, minute);
    }

    return 0;
}
