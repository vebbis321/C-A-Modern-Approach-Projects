#include <stdio.h>

int main(void)
{
    int n, s;

    printf("Enter number of days in a month: ");
    scanf("%d", &n);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &s);

    for (int day = 1; day <= n; day++) {
        if (day == 1) {
            for (int i = 1; i < s; i++) {
                printf("   ");
            }
        } else if (((s + day) - 2) % 7 == 0) { 
            printf("\n");
        }

        printf("%2d ", day);
    }

    printf("\n");

    return 0;
}