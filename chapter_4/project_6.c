#include <stdio.h>

int main(void)
{ 
   int n1, n2, n3, n4, n5, n6, n7, n8,
   n9, n10, n11, n12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
    &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    int firstSum = n2 + n4 + n6 + n8 + n10 + n12;
    int secondSum = n1 + n3 + n5 + n7 + n9 + n11;

    int total = (((firstSum * 3) + secondSum) - 1);

    int remainder = total % 10;
    int subtractedRemainder = 9 - remainder;

    printf("Check digit: %d\n", subtractedRemainder);

    return 0;
}
