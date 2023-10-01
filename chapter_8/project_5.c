#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define NUM_MONTHS num_years * 12

int main(void)
{
    int i, low_rate, num_years, month;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (month = 1; month <= NUM_MONTHS; month++) {
        for (i = 0; i < NUM_RATES; i++) {
            value[i] += ((double) (low_rate + i) / 12) / 100 * value[i];
        }
        if (month % 12 == 0) {
            printf("%3d    ", month / 12);
            for (int n = 0; n < NUM_RATES; n++) {
                printf("%7.2f", value[n]);
            }
            printf("\n");
        }
    }

    return 0;
}

