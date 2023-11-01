#include <stdio.h>

int main(void)
{

    char arr[100];
    char terminating_char, ch;
    int index = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminating_char = ch;
            break;
        }
        else {
            arr[index] = ch;
            index++;
        }
    }

    printf("Reversal of sentence: ");

    int temp_index = 0;
    char temp_arr[20];

    for (int i = index - 1; i >= 0; i--) {
        temp_arr[temp_index] = arr[i];
        temp_index++;

        if (arr[i] == ' ' || i == 0) {
            for (int n = temp_index - 1; n >= 0; n--) {
                if (temp_arr[n] != ' ') { printf("%c", temp_arr[n]); }
            }
            temp_index = 0;
            if (i != 0) { printf(" "); }
        }
    }

    printf("%c\n", terminating_char);

    return 0;
}
