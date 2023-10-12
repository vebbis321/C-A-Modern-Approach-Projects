#import <stdbool.h>
#import <stdio.h>

#define SIZE ((int)(sizeof(last_name_arr) / sizeof(last_name_arr[0])))

int main(void)
{
    bool is_last_name = false;
    char ch, first_letter, last_name_arr[20];
    int index = 0;

    printf("Enter first and last name: ");

    while ((ch = getchar()) != ' ') {
        if (index == 0) {
            first_letter = ch;
            index = 1;
        }
    }

    index = 0;
    while ((ch = getchar()) != '\n') {
        last_name_arr[index] = ch;
        index++;
    }

    for (int idx = 0; last_name_arr[idx] != '\0'; idx++) {
        printf("%c", last_name_arr[idx]);
    }

    printf(", %c.\n", first_letter);

    return 0;
}
