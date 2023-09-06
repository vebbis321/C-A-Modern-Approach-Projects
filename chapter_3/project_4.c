#include <stdio.h>

int main(void)
{
    int phoneNumLeft, phoneNumMiddle, phoneNumRight;

    printf("Enter phone number (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &phoneNumLeft, &phoneNumMiddle, &phoneNumRight);
    printf("You entered %3d.%3d.%4d\n", phoneNumLeft, phoneNumMiddle, phoneNumRight);

    return 0;
} 