#import <stdio.h>
#import <math.h>

int main(void)
{
    double x, y, average = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do { 
        y = average;

        double division = x / y;
        average = ((y + division) / 2);

        printf("%lf\t%lf\t%lf\t%lf\n", x, y, division, average);

    } while (fabs(y - average) > 0.00001);

    return 0;
}
