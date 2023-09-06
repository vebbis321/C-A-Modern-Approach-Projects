#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);

    for (int m = 2; m*m <= n; m+=2) { 
        printf("%d\n", m*m);
    }

    return 0;
}