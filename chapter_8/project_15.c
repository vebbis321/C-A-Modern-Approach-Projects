#include <ctype.h>
#include <stdio.h>

#define MAX_VALUE 50

int main(void)
{
    char ch, cryptic_char;
    char arr[MAX_VALUE] = {0};
    int shift_amount;
    int i, length;

    printf("Enter message to be encrypted: ");
    for (i = 0, length = 0; (ch = getchar()) != '\n' && i < MAX_VALUE; i++) {
        length++;
        arr[i] = ch;
    }

    printf("Enter shift amount: ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");
    for (i = 0; i < length; i++) {
        // from a to z
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            // if shift_amount added with char is bigger than z
            cryptic_char = ((arr[i] - 'a') + 3) % 26 + 'a';
        }
        // from A to Z
        else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            // if shift_amount added with char is bigger than Z
            cryptic_char = ((arr[i] - 'A') + 3) % 26 + 'A';
        }
        else {
            cryptic_char = arr[i];
        }

        putchar(cryptic_char);
    }

    return 0;
}
