#include <stdio.h>

int main(void)
{
    typedef struct {
        char *country;
        int code;
    } CountryCodes;

    int code;

    const CountryCodes countryCodes[] = {{"Argentina", 54}, {"Brazil", 55}};

    printf("Enter code: ");
    scanf(" %d", &code);

    for (int i = 0; i < sizeof(countryCodes) / sizeof(countryCodes[0]); i++) {
        if (code == countryCodes[i].code) {
            printf("Found the country %s at code %d\n", countryCodes[i].country,
                   countryCodes[i].code);
            return 0;
        }
    }

    printf("Error\n");
    return 0;
}
