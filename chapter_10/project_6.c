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
void push(int n);
int pop(void);

int main(void)
{
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
            case '9': push(ch - 48); break;
            case '/':
                operand2 = pop();
                operand1 = pop();
                push(operand1 / operand2);
                break;
            case '-':
                operand2 = pop();
                operand1 = pop();
                push(operand1 - operand2);
                break;
            case '*': push(pop() * pop()); break;
            case '+': push(pop() + pop()); break;
            case '=': printf("Value of expression %d\n", pop()); break;
            case ' ': break;
            default: exit(EXIT_SUCCESS);
            }
        }
    }

    return 0;
}

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(int n)
{
    if (is_full()) {
        printf("Expression is to complex");
        exit(EXIT_FAILURE);
    }
    else
        contents[top++] = n;
}

int pop(void)
{
    if (is_empty()) {
        printf("Not enough operands in expression");
        exit(EXIT_FAILURE);
    }
    else
        return contents[--top];
}
