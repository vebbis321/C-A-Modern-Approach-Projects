#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int a[40], *p = a, *q = a;
    char ch;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) { *p++ = toupper(ch) - 65; }
    }

    for (p -= 1; p >= q;) {
        if (*p-- != *q++) {
            printf("Not a palindrome");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}
