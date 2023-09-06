#include <stdio.h>

int main(void)
{
    int userInput1, userInput2;

    for (;;) { 
        printf("Enter two integers: ");
        scanf("%d %d", &userInput1, &userInput2);

        if (userInput2 == 0) {
            printf("Greatest common divisor: %d\n", userInput1);
            break;
        } else {
            int m = userInput1, n = userInput2, remainder;
            while(m % n != 0)  {
                remainder = m % n;
                m = n;
                n = remainder;  
            }
            printf("Greatest common divisor: %d\n", remainder); 
            break;
        }
    }

    return 0;

}