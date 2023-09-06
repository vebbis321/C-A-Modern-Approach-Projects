#import <stdio.h>

int main(void)
{

    char ch;
    printf("Enter a phone number: ");

    while ((ch = getchar()) != '\n') { 
        printf("%d\n", ch);

    }
}

