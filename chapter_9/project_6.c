#include <math.h>
#include <stdio.h>

double polynomial(double x);

int main(void)
{
    double x;
    printf("Enter value for x: ");
    scanf("%lf", &x);

    printf("Value of polynomial, %.2lf", polynomial(x));

    return 0;
}

double polynomial(double x)
{
    return 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x -
           6;
}
