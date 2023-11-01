#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator);

int main(void)
{
    int numer, denom, m, n, remainder;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numer, &denom);
    reduce(numer, denom, &m, &n);

    printf("In lowest terms: %d/reduced_denominator%d\n", numer / m, denom / m);
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator)
{

    int remainder;

    for (*reduced_numerator = numerator, *reduced_denominator = denominator;
         *reduced_denominator > 0;) {
        remainder = *reduced_numerator % *reduced_denominator;
        *reduced_numerator = *reduced_denominator;
        *reduced_denominator = remainder;
    }
}
