#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char ch, cryptic_char;
    char arr[100] = {0};
    int shift_amount;
    int idx = 0;

    printf("Enter message to be encrypted: ");

    while ((ch = getchar()) != '\n') {
        arr[idx] = ch;
        idx++;
    }

    printf("Enter shift amount: ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");

    for (int i = 0; i < idx; i++) {
        printf("%c\n", arr[i]);
        // from a to z
        if (arr[i] >= 'a' || arr[i] <= 'z') {
            // if shift_amount added with char is bigger than z
            if ((arr[i] + shift_amount) > 122) {
                cryptic_char = ((arr[i] + shift_amount) - 122) + 61;
            }
            else {
                cryptic_char = arr[i] + shift_amount;
            }
        }
        // from A to Z
        else if (arr[i] >= 'A' || arr[i] <= 'Z') {
            // if shift_amount added with char is bigger than Z
            if ((arr[i] + shift_amount) > 90) {
                cryptic_char = ((arr[i] + shift_amount) - 122) + 61;
            }
            else {
                cryptic_char = arr[i] + shift_amount;
            }
        }
        else {
            cryptic_char = arr[i];
        }

        printf("%ch", cryptic_char);
    }

    return 0;
}
