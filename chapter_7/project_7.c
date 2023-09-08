#include <stdio.h>


void add(int num1, int num2, int denom1, int denom2);
void multiply(int num1, int num2, int denom1, int denom2);
void divide(int num1, int num2, int denom1, int denom2);
void subtract(int num1, int num2, int denom1, int denom2);

int main(void)
{
    int num1, denom1, num2, denom2;
    char operator;

    printf("Enter two fractions separated by a operator: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &operator, &num2, &denom2);


    switch (operator) {
        case '+': add(num1, num2, denom1, denom2); return 0;
        case '*': multiply(num1, num2, denom1, denom2); return 0;
        case '/': divide(num1, num2, denom1, denom2); return 0;
        case '-': subtract(num1, num2, denom1, denom2); return 0;
        default:
            break;
    }

    
    return 0;
}

void add(int num1, int num2, int denom1, int denom2)
{
    int result_num = num1 * denom2 + num2 * denom1;
    int result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
}

void multiply(int num1, int num2, int denom1, int denom2)
{
    int result_num = num1 *  num2;
    int result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
}

void divide(int num1, int num2, int denom1, int denom2)
{
    int result_num = num1 * denom2;
    int result_denom = num2  * denom1;
    printf("The sum is %d/%d\n", result_num, result_denom);
}

void subtract(int num1, int num2, int denom1, int denom2)
{
    int result_num = num1 * denom2 - num2 * denom1;
    int result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
}

