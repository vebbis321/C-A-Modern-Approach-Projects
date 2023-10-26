#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// macros
#define STACK_SIZE 100

// global
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
int pop(void);

int main(void)
{
    char ch;

    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        switch (ch) {
        case '(':
        case '{':
            push(ch);
            break;
        case ')':
        case '}':
            if (pop())
                break;
            else {
                printf("Parantheses/braces are not nested properly");
                return 0;
            }
        default:
            break;
        }
    }

    printf("Paranetheses/braces %s nested\n", is_empty() ? "are" : "are not");
    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full()) {
        printf("Stack overflow");
        exit(EXIT_FAILURE);
    }
    else
        contents[top++] = ch;
}

int pop(void)
{
    if (is_empty()) {
        printf("Stack underflow");
        return 0;
    }
    else
        return contents[--top];
}
