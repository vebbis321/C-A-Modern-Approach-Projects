#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define SIZE 40

bool is_palindrome(const char *message);

int main(void)
{
    char message[SIZE + 1], ch, *p = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && p < message + SIZE) {
        *p++ = ch;
    }
    *(++p) = '\0';

    printf("Is palindrome: %b\n", is_palindrome(message));

    return 0;
}

bool is_palindrome(const char *message)
{
    const char *p = message;

    while (*message) {
        message++;
    }
    message--;

    for (; message >= p;) {
        printf("%c %c\n", *message, *p);
        if (isalpha(*message) && isalpha(*p)) {
            if (toupper(*message--) != toupper(*p++)) { return 0; }
        }
        else if (isalpha(*message) && isalpha(*p) == false)
            p++;
        else if (isalpha(*p) && isalpha(*message) == false)
            message--;
        else {
            p++;
            message--;
        }
    }

    return 1;
}
