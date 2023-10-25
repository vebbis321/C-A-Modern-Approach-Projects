#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *clear_array(int a[4]);
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char a[10][10] = {'.'};
    char current_char = 'A';
    int current_row = 0;
    int current_col = 0;

    int stepped_directions[4] = {false};

    srand((unsigned)time(NULL));

    generate_random_walk(a);

    a[current_row][current_col] = current_char;

    while (current_char != 'Z') {

        int step = rand() % 4;

        switch (step) {
        case 0:
            // up
            if ((current_row - 1) >= 0 && (current_row + 1) <= 10 &&
                a[current_row - 1][current_col] == '.') {

                current_row--;
                current_char++;

                a[current_row][current_col] = current_char;
                clear_array(stepped_directions);
            }
            else {
                stepped_directions[step] = true;
            }

            break;

        case 1:
            // right
            if ((current_col + 1) >= 0 && (current_col + 1) <= 10 &&
                a[current_row][current_col + 1] == '.') {

                current_col++;
                current_char++;

                a[current_row][current_col] = current_char;
                clear_array(stepped_directions);
            }
            else {
                stepped_directions[step] = true;
            }

            break;

        case 2:
            // bottom
            if ((current_row + 1) >= 0 && (current_row + 1) <= 10 &&
                a[current_row + 1][current_col] == '.') {

                current_row++;
                current_char++;

                a[current_row][current_col] = current_char;
                clear_array(stepped_directions);
            }
            else {
                stepped_directions[step] = true;
            }

            break;

        case 3:
            // left
            if ((current_col - 1) >= 0 && (current_col + 1) <= 10 &&
                a[current_row][current_col - 1] == '.') {

                current_col--;
                current_char++;

                a[current_row][current_col] = current_char;
                clear_array(stepped_directions);
            }
            else {
                stepped_directions[step] = true;
            }

            break;
        }

        for (int i = 0; i < 4; i++) {
            if (stepped_directions[i] == false)
                break;

            if (i == 3 && stepped_directions[i] == true) {
                current_char = 'Z';
            }
        }
    }

    print_array(a);

    return 0;
}

int *clear_array(int a[4])
{
    for (int i = 0; i < 4; i++) {
        a[i] = false;
    }

    return a;
}

void generate_random_walk(char walk[10][10])
{

    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            walk[row][col] = '.';
        }
    }
}

void print_array(char walk[10][10])
{
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            printf("%c", walk[row][col]);
            if (col == 9)
                printf("\n");
        }
    }
}
