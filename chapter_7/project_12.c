#import <stdio.h>

float calculate(float f, float new_f, char operand);

int main(void)
{
    float f = 0, new_f;
    char ch = '+';


    do {
        scanf(" %f", &new_f);
        
        switch (ch) {
            case '+': case '-': case '/': case '*':
                f = calculate(f, new_f, ch);
        }
        printf("%f\n", f);

    } while ((ch = getchar()) != '\n');
    
    printf("JE: %f", f);
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
