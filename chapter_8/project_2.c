#include <stdio.h>
#include <stdbool.h>

#define SEEN_COUNT_ROW 1
#define DIGIT_ROW 0

int main(void)
{
    int digits[2][10] = {false};
    bool is_repeated = false;
    int digit;
    long n;

    for (int i = 0; i < 10; i++) {
        digits[DIGIT_ROW][i] = i;
    }

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digits[SEEN_COUNT_ROW][digit] != 0) {
            is_repeated = true;
            int seen_count = digits[SEEN_COUNT_ROW][digit];
            seen_count +=1;
            digits[SEEN_COUNT_ROW][digit] = seen_count;
        } else {
            digits[SEEN_COUNT_ROW][digit] = 1;
            digits[DIGIT_ROW][digit] = digit;
        }
        n /= 10;
    }

    if (is_repeated) {
        printf("Digit\t");
        for (int row = 0; row < 10; row++) {
            printf("%d\t", digits[DIGIT_ROW][row]);
        }

        printf("\n");

        printf("Count\t");
        for (int row = 0; row < 10; row++) {
            printf("%d\t", digits[SEEN_COUNT_ROW][row]);
        }

    }
    else {
        printf("No repeated digit");
    }

    printf("\n");

    return 0;
}
