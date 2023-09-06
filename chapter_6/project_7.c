#include <stdio.h>

int main(void)
{
    int n, t;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        t = 0;
        for (int m = 1; m <= i; m++) {
            t+=i;
        }
 
        printf("%10d%10d\n", i, t);

    }
 
    return 0;
}