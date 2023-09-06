#include <stdio.h>

int main(void)
{ 
    int taxableIncome;
    float tax;
    scanf("%d", &taxableIncome);
    
    if (taxableIncome < 750) { 
        tax = taxableIncome * 0.01;
    } else if (taxableIncome <= 2250) { 
        tax = 7.5;
        if (taxableIncome == 750) { 
            tax += taxableIncome * 0.01;
        } else { 
            tax += taxableIncome * 0.02; 
        }
    } else if (taxableIncome <= 3750) { 
        tax = 75;
        if (taxableIncome == 2250) { 
            tax += taxableIncome * 0.02;
        } else { 
            tax += taxableIncome * 0.03; 
        }
    }
    {
        /* code */
    }
    
}