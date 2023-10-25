#include <stdio.h>

double power(double x, int n);

int main(void)
{
    double x;
    int n;

    printf("Enter x and n: ");
    scanf("%lf %d", &x, &n);

    printf("%.1lf to the power of %d is %.2lf\n", x, n, power(x, n));

    return 0;
}

double power(double x, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0) {
        return power(x, n / 2) * power(x, n / 2);
    }
    else {
        return x * power(x, n - 1);
    }
}
