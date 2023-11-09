#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main(void)
{
    bool isLastName = false;
    char ch, name[30];
    int i = 0;

    printf("Enter first and last name: ");

    for (; (ch = getchar()) != '\n' && i < 30 - 1; i++) {
        name[i] = ch;
    }

    reverse_name(name);

    printf("%s\n", name);

    return 0;
}

void reverse_name(char *name)
{

    int i = 0, j = 0;
    char temp_str[30], first_in[2];
    first_in[1] = '\0';
    first_in[0] = name[0];
    bool isLastName = false;

    while (i < strlen(name)) {
        if (isLastName) temp_str[j++] = name[i];
        if (name[i] == ' ') isLastName = true;
        i++;
    }

    strcat(temp_str, ", ");
    strcat(temp_str, first_in);
    strcat(temp_str, ".");
    strcpy(name, temp_str);
}
