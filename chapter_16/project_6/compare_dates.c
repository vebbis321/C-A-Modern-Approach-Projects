#include <stdio.h>

typedef struct {
    int month;
    int day;
    int year;
} Date;

int day_of_year(Date d);
int compare_dates(Date d1, Date d2);

int main(void)
{

    Date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d2.month, &d2.day, &d2.year);

    switch (compare_dates(d1, d2)) {
    case -1: printf("The first date is the biggest"); break;
    case 1: printf("The second date is the biggest"); break;
    case 0: printf("The dates are equal"); break;
    default: printf("Something went wrong");
    }

    printf("\n");

    return 0;
}

int day_of_year(Date d)
{
    int res = 0, i;
    const int days_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month > 1 &&
        ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0))
        res++;
    for (i = 0; i < d.month; i++)
        res += days_month[i];
    return res + d.day;
}

int compare_dates(Date d1, Date d2)
{
    int d1day = day_of_year(d1);
    int d2day = day_of_year(d2);
    if (d1day > d2day)
        return -1;
    else if (d1day < d2day)
        return 1;
    else
        return 0;
}
