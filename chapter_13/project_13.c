#include <ctype.h>
#include <stdio.h>

#define MAX_VALUE 50 + 1

void encrypt(char *message, int shift);

int main(void)
{
    char ch, message[MAX_VALUE] = {0};
    int shift_amount, i;

    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n' && i < MAX_VALUE - 1; i++) {
        message[i] = ch;
    }
    message[++i] = '\0';

    printf("Enter shift amount: ");
    scanf("%d", &shift_amount);

    encrypt(message, shift_amount);

    printf("Encrypted message: %s\n", message);

    return 0;
}

void encrypt(char *message, int shift_amount)
{
    while (*message) {
        // from a to z
        if (*message >= 'a' && *message <= 'z') {
            // if shift_amount added with char is bigger than z
            *message = ((*message - 'a') + shift_amount) % 26 + 'a';
        }
        // from A to Z
        else if (*message >= 'A' && *message <= 'Z') {
            // if shift_amount added with char is bigger than Z
            *message = ((*message - 'A') + shift_amount) % 26 + 'A';
        }

        message++;
    }
}
