#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{

    int wins = 0, losses = 0;
    char keep_playing = 'y';

    do {
        if (play_game()) {
            wins++;
            printf("You win!\n");
        }
        else {
            losses++;
            printf("You lose!\n");
        }

        printf("\nPlay again? ");
        scanf(" %c", &keep_playing);
        printf("\n");
    } while (toupper(keep_playing) == 'Y');

    printf("Wins: %d, losses: %d\n", wins, losses);

    return 0;
}

bool play_game(void)
{
    int point = 0;
    srand((unsigned)time(NULL));

    for (;;) {
        int sum = roll_dice();

        printf("You rolled: %d\n", sum);

        switch (sum) {
        case 7:
            return point == 0 ? true : false;
        case 11:
            if (point == 0)
                return true;
            else
                break;
        case 2:
        case 3:
        case 12:
            if (point == 0)
                return false;
            else
                break;
        default:
            break;
        }

        if (point == 0) {
            point = sum;
            printf("Your point is %d\n", point);
        }
        else if (sum == point) {
            return true;
        }
    }
}

int roll_dice(void)
{
    int dice1, dice2;

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    return dice1 + dice2;
}
