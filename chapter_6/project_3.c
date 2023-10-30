#include <stdio.h>

int main(void)
{
    int numer, denom, m, n, remainder;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numer, &denom);

    for (m = numer, n = denom; n > 0;) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", numer / m, denom / m);
    return 0;
}
