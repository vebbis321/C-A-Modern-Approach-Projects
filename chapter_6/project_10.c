#include <stdio.h>

int main(void)
{
    int d, m, y;
    int earliestDay = 0, earliestM = 0, earliestY = 0;

    for(;;) {

        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%02d", &m, &d, &y);

        if ((earliestY + earliestDay + earliestM) == 0) {
            earliestDay = d; earliestM = m; earliestY = y;
        } else if ((m + d + y) == 0) {
            break;
        } else if (earliestY > y) {
            earliestDay = d; earliestM = m; earliestY = y;
        } else if (earliestY == y && earliestM > m) { 
            earliestDay = d; earliestM = m; earliestY = y;
        } else if (earliestY == y && earliestM == m && earliestDay > d) {
            earliestDay = d; earliestM = m; earliestY = y;
        } else {
            continue;
        }

    } 
   
    printf("%d/%2d/%02d is the earliest date\n", earliestM, earliestDay, earliestY);

    return 0;
}