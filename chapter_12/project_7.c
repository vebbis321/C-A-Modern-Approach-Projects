#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N], big, small, *n;

    printf("Enter %d numbers: ", N);
    for (n = b; n < b + N; n++)
        scanf("%d", n);

    max_min(b, N, &big, &small);

    printf("Largest: %d", big);
    printf("Smallest: %d", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int *p;

    *max = *min = a[0];
    for (p = a + 1; p < a + n; p++) {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}
