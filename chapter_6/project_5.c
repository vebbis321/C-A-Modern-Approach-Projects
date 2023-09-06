#include <stdio.h>

int main(void)
{
    int unserInput;
    printf("Enter a integer number: ");
    scanf("%d", &unserInput);
    printf("Your number backwards is: ");

    do {
        int m = unserInput % 10;
        unserInput /= 10;
        printf("%d", m);
    } while(unserInput>0);
    printf("\n");

    return 0;
}