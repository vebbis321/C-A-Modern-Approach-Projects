// Calculate a broker's commision

#include <stdio.h>

int main(void)
{
    int numOfShares;
    float pricePerShare, commision, value;

    printf("Enter number of shares: ");
    scanf("%d", &numOfShares);

    printf("Enter price per share: ");
    scanf("%f", &pricePerShare);

    value = numOfShares * pricePerShare;

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

    if (numOfShares < 2000) { 
        printf("Rival commision: $%d and %d cents\n", numOfShares * 33, numOfShares * 3);
    } else if (numOfShares >= 2000) { 
        printf("Rival commision: $%d and %d cents\n", numOfShares * 33, numOfShares * 2); 
    }

    printf("Commision: $%.2f\n", commision);
    
    return 0;
}