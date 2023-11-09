#include <stdio.h>
#include <string.h>

#define N 10 + 1

void reverse(char *message);

int main(void)
{

    char message[N], ch;
    char *p = message;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && p < message + N - 1) {
        *p++ = ch;
    }

    *(++p) = '\0';
    reverse(message);

    printf("The reversal is: %s", message);

    printf("\n");
    return 0;
}

void reverse(char *message)
{
    char *p = message, temp;

    while (*message) {
        message++;
    }
    message--;

    while (message >= p) {
        temp = *p;
        *p = *message;
        *message = temp;
        printf("%s", message);
        p++;
        message--;
    }
}
