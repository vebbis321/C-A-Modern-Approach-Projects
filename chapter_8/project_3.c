#import <stdio.h>
#import <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n, r;

    

    do {
        printf("Enter a number: ");
        scanf("%ld", &r);

        n = r;
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) {
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0) 
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

    } while (r > 0);

    return 0;
}
