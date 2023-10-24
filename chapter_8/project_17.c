#include <stdio.h>

int main(void)
{
    int size, size_squared, row, col, n;

    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int a[99][99] = {0};

    size_squared = size * size;

    row = 0;
    col = size / 2;
    printf("%d\n", col);

    for (int i = 1; i <= size_squared; i++) {
        if (i == 1) {
            a[row][col] = i;
        }
        else {
            row = ((row - 1) + size) % size;
            col = (col + 1) % size;

            if (a[row][col] == 0) {
                a[row][col] = i;
            }
            else {
                row = ((row + 2) + size) % size;
                col = ((col - 1) + size) % size;
                a[row][col] = i;
            }
        }
    }

    for (int row = 0; row < size; row++) {
        printf("\n");
        for (int col = 0; col < size; col++) {

            printf("%d ", a[row][col]);
        }
    }
}
