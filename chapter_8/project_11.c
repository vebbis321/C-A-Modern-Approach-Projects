#import <stdio.h>

int main(void)
{

    char ch;
    char number[15], index = 0;
    printf("Enter a phone number: ");

    while ((ch = getchar()) != '\n') { 
        switch (ch) { 
            case 65:
            case 66:
            case 67:
                number[index] = '2'; break;
            case 68:
            case 69:
            case 70:
                number[index] = '3'; break;
            case 71:
            case 72:
            case 73:
                number[index] = '4'; break;
            case 74:
            case 75:
            case 76:
                number[index] = '5'; break;
            case 77:
            case 78:
            case 79:
                number[index] = '6'; break;
            case 80:
            case 82:
            case 83:
                number[index] = '7'; break;
            case 84:
            case 85:
            case 86:
                number[index] = '8'; break;
            case 87:
            case 88:
            case 89:
                number[index] = '9'; break;
            default:
                number[index] = ch;

        }
        index++;
    }

    for (int i = 0; i < sizeof(number) / sizeof(number[0]); i++) {
        printf("%c", number[i]);
    }

    printf("\n");
    return 0;
}


