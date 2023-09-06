#include <stdio.h>

int main(void)
{
    int n;
    float e = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1, denom = 1.0f; i <= n; i++) { 
        e += 1.0f /(denom *= i);
    }

    printf("e is: %f\n", e);

    return 0;
}