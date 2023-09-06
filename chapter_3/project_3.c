#include <stdio.h>

int main(void)
{
    int GSI, groupId, publisherCode, itemNum, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSI, &groupId, &publisherCode, &itemNum, &checkDigit);

    printf("GSI prefix: %d\n", GSI);
    printf("Group identifier: %d\n", groupId);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", checkDigit);

    return 0;
}