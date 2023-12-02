#include "stackADT.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Stack s1 = create();
    char ch;
    int operand1, operand2;

    while (true) {
        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n') {
            switch (ch) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9': push(s1, ch - 48); break;
            case '/':
                operand2 = pop(s1);
                operand1 = pop(s1);
                push(s1, operand1 / operand2);
                break;
            case '-':
                operand2 = pop(s1);
                operand1 = pop(s1);
                push(s1, operand1 - operand2);
                break;
            case '*': push(s1, pop(s1) * pop(s1)); break;
            case '+': push(s1, pop(s1) + pop(s1)); break;
            case '=': printf("Value of expression %d\n", pop(s1)); break;
            case ' ': break;
            default: exit(EXIT_SUCCESS);
            }
        }
    }

    return 0;
}
