#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
    int n;

    printf("Enter n of magic square: ");
    scanf("%d", &n);

    int magic_square[99][99] = {0};

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);
}

void create_magic_square(int n, int magic_square[n][n])
{

    int size_squared = n * n;

    int row = 0;
    int col = n / 2;

    for (int i = 1; i <= size_squared; i++) {
        if (i == 1) {
            magic_square[row][col] = i;
        }
        else {
            row = ((row - 1) + n) % n;
            col = (col + 1) % n;

            if (magic_square[row][col] == 0) {
                magic_square[row][col] = i;
            }
            else {
                row = ((row + 2) + n) % n;
                col = ((col - 1) + n) % n;
                magic_square[row][col] = i;
            }
        }
    }
}
void print_magic_square(int n, int magic_square[n][n])
{

    for (int row = 0; row < n; row++) {
        printf("\n");
        for (int col = 0; col < n; col++) {

            printf("%d ", magic_square[row][col]);
        }
    }
}
