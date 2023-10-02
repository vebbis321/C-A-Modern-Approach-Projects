#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i;
    char message[100];
    
    printf("Enter message: ");

    char ch;

    for (i = 0; (ch = getchar()) != '\n'; i++) {
        switch (ch) {
            case 'a': message[i] = '4'; break;
            case 'b': message[i] = '8'; break;
            case 'e': message[i] = '3'; break;
            case 'i': message[i] = '1'; break;
            case 'o': message[i] = '0'; break;
            case 's': message[i] = '5'; break;
            default:
                message[i] = ch;
        }
    }

    printf("In BIFF-speak: ");

    for (int n = 0; n < (i + 10); n++) {
        if (n < i)
            printf("%c", toupper(message[n]));
        else 
            printf("!");
    }

    printf("\n");

    return 0;
}
