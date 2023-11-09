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
int evaluate_RPN_expression(const char *expression);

int main(void)
{
    char ch, expression[40 + 1];
    int i;

    while (true) {
        printf("Enter an RPN expression: ");

        for (i = 0; (ch = getchar()) != '\n' && i < 40; i++) {
            expression[i] = ch;
        }
        expression[++i] = '\0';
        printf("Value of expression: %d\n",
               evaluate_RPN_expression(expression));
    }

    return 0;
}

int evaluate_RPN_expression(const char *expression)
{
    int operand1, operand2;

    do {
        switch (*expression) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9': push(*expression - 48); break;
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
        case '=': return pop(); break;
        case ' ': break;
        default: exit(EXIT_SUCCESS);
        }

    } while (*expression++);

    exit(EXIT_FAILURE);
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
