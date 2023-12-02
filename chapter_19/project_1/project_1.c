
#include "stackADT.h"
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    Stack s1 = create();
    char ch;

    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        switch (ch) {
        case '(':
        case '{': push(s1, ch); break;
        case ')':
        case '}':
            if (pop(s1))
                break;
            else {
                printf("Parantheses/braces are not nested properly");
                return 0;
            }
        default: break;
        }
    }

    printf("Paranetheses/braces %s nested\n", is_empty(s1) ? "are" : "are not");
    return 0;
}
