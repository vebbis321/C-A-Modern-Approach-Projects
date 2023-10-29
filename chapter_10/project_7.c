#include <stdio.h>

#define MAX_DIGITS 10

const int digit_segments[10][7] = {
    /*Segment: 0  1  2  3  4  5  6  | Digit | */
    {1, 1, 1, 1, 1, 1, 0}, /* 0 */
    {0, 1, 1, 0, 0, 0, 0}, /* 1 */
    {1, 1, 0, 1, 1, 0, 1}, /* 2 */
    {1, 1, 1, 1, 0, 0, 1}, /* 3 */
    {0, 1, 1, 0, 0, 1, 1}, /* 4 */
    {1, 0, 1, 1, 0, 1, 1}, /* 5 */
    {1, 0, 1, 1, 1, 1, 1}, /* 6 */
    {1, 1, 1, 0, 0, 0, 0}, /* 7 */
    {1, 1, 1, 1, 1, 1, 1}, /* 8 */
    {1, 1, 1, 1, 0, 1, 1}  /* 9 */
};
char digits[3][MAX_DIGITS * 4]; // 4 makes nooo sense

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{

    char ch;
    int position = 0;
    clear_digits_array();

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n' && position < 10) {
        if (ch >= '0' && ch <= '9') {
            process_digit(ch - 48, position);
            position++;
        }
    }

    print_digits_array();

    return 0;
}

void clear_digits_array()
{
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 20; col++) {
            digits[row][col] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    int segment;
    char symbol;
    for (int i = 0; i < 10; i++) {
        segment = digit_segments[digit][i];

        if (segment) {
            switch (i) {
            case 0: digits[0][position * 4 + 1] = '_'; break;
            case 1: digits[1][position * 4 + 2] = '|'; break;
            case 2: digits[2][position * 4 + 2] = '|'; break;
            case 3: digits[2][position * 4 + 1] = '_'; break;
            case 4: digits[2][position * 4 + 0] = '|'; break;
            case 5: digits[1][position * 4 + 0] = '|'; break;
            case 6: digits[1][position * 4 + 1] = '_'; break;
            }
        }
    }
}

void print_digits_array(void)
{
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < MAX_DIGITS * 4; col++) {
            printf("%c", digits[row][col]);
        }
        printf("\n");
    }
}
