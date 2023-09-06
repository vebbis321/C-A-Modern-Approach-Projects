// Calculate a broker's commision

#include <stdio.h>

int main(void)
{
    float commision, value;

    for(;;) { 
        printf("Enter a value of trade: ");
        scanf("%f", &value); 

        if (value == 0) { 
            break;
        } 

        if (value < 2500.00f) {
            commision = 30.00f + .017f * value;    
        } else if (value < 6250.00f) { 
            commision = 56.00f + .0066f * value;    
        } else if (value < 20000.00f) { 
            commision = 76.00f + .0034f * value;
        } else if (value < 50000.00f) { 
            commision = 100.00f + .0022f * value;
        } else if (value < 500000.00f) { 
            commision = 255.00f + .0009f * value;
        } else { 
            commision = 255.00f + .0009f * value;
        }

        if (commision < 39.00f) { 
            commision = 39.00f;
        }
        printf("Commision: $%.2f\n", commision);

    }

    
    return 0;
}