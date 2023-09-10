#import <stdio.h>

float calculate(float f, float new_f, char operand);

int main(void)
{
    float f = 0;
    char ch, operand;

    while ((ch = getchar()) != '\n') {
        if (ch >= 48 && ch <= 57) {
            f = calculate(f, ch - 48, '+');
        } else if 
    }
}

float calculate(float f, float new_f, char operand)
{

    switch (operand) {
        case '+': return f += new_f;
        case '-': return f -= new_f;
        case '/': return f /= new_f;
        case '*': return f *= new_f;
        default: return 0;
    }
}
