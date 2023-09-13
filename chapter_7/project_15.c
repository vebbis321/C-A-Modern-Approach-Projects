#import <stdio.h>

int main(void)
{
    int x, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        factorial *= i;
        printf("Factorial of %d: %d\n", x, factorial);
    }

    printf("Factorial of %d: %d\n", x, factorial);

    return 0;
}
