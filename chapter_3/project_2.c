#include <stdio.h>

int main(void)
{
    int itemNum, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): "); 
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tEnter Purchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%-2d/%-2d/%-d\n", itemNum, price, month, day, year);

    return 0;
}