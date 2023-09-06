#include <stdio.h>

int main(void)
{ 
    int userNum;
    printf("Enter a number: ");
    scanf("%d", &userNum);

    if (userNum >= 0 && userNum < 10)
    {
        printf("One digit\n");
    }
    else if (userNum > 9 && userNum < 100) {
        printf("Two digit\n");
    }
    else if (userNum > 99 && userNum < 1000) 
    {
        printf("Three digit\n");
    }
    else if (userNum > 999 && userNum < 10000)
    {
        printf("Four digit\n");
    }
    else { 
        printf("Five digits or more\n");
    }

    return 0;    
    
    
}