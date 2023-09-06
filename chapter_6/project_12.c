
#include <stdio.h>

int main(void)
{
    float userE;
    float e = 1;
    printf("Enter e: ");
    scanf("%f", &userE);

    for (int i = 1, denom = 1.0f; ; i++) { 
        e += 1.0f /(denom *= i);
        printf("e %f\n", e);

        if (e > userE)
        {
            break;
        }
    }

    return 0;
}