#include <stdio.h>

int main(void)
{

    int a[5][5] = {0};
    int row_totals[5] = {0}, column_totals[5] = {0};

    for (int row = 0; row < 5; row++) {
        printf("Enter row %d: ", row + 1);

        scanf("%d %d %d %d %d", &a[row][0], &a[row][1], &a[row][2], &a[row][3], &a[row][4]);
    }

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            row_totals[row] += a[row][col];
            column_totals[row] += a[col][row];
        }       
    }

    printf("Row totals:");

    for (int i = 0; i < 5; i++) {
        printf(" %d", row_totals[i]);
    }

    printf("\n");

    printf("Column totals:");
    for (int i = 0; i < 5; i++) {
        printf(" %d", column_totals[i]);
    }
    
    printf("\n");

    return 0;
}
