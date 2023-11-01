#include <stdio.h>

#define N 40

int main(void)
{

    char a[N], ch;
    char *p = a;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        *p++ = ch;
        printf("%p\n", p);
    }

    printf("The reversal is: ");
    for (p -= 1; p >= a; p--) {
        printf("%c", *p);
    }

    printf("\n");
    return 0;
}
