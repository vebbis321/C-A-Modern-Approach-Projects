#include <stdio.h>

int main(void)
{
    int speed;
    printf("Enter wind speed in knots: ");
    scanf("%d", &speed);

    if (speed > 63) { 
        printf("Hurricane\n");
    } else if (speed > 47) {
        printf("Storm\n");
    } else if (speed > 27) { 
        printf("Gale\n");
    } else if (speed > 3) { 
        printf("Breeze\n");
    } else if (speed > 0) {
        printf("Light air\n");
    } else { 
        printf("Calm\n");
    }
    
    return 0;
}