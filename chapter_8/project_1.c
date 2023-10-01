#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_seen[10][2] = {false};
    bool is_repeated = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        printf("%d\n", digit);
        if (digit_seen[digit][0] != 0) {
            is_repeated = true;
            int seen_count = digit_seen[digit][0];
            seen_count +=1;
            digit_seen[digit][0] = seen_count;
        } else {
            digit_seen[digit][0] = 1;
            digit_seen[digit][1] = digit;
        }
        n /= 10;
    }

    if (is_repeated) {
        printf("Repeated digit\n");
        for (int row = 0; row < 10; row++) {
            if (digit_seen[row][0] > 1) {
                printf("%d", digit_seen[row][1]);
            } 
        }
    }
    else {
        printf("No repeated digit\n");
    }

    return 0;
}
