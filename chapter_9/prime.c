#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}

bool is_prime(int n)
{
    int divisor;

    if (n <= 1)
        return false;
    for (divisor = 2; divisor * 2 <= n; divisor++)
        if (n % divisor == 0)
            return false;
    return true;
}
