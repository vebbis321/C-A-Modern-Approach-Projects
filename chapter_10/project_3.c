// Classifies a poker hand

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// external variables
bool straight, flush, four, three;
int pairs;

// prototypes
void read_cards(int hand[5][2]);
void analyze_hand(int hand[5][2]);
void print_result(void);
void selection_sort(int hand[5][2], int n);

int main(void)
{

    int hand[5][2];
    for (;;) {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
}

void read_cards(int hand[5][2])
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (int card = 0; card < 5; card++) {
        hand[card][0] = 0;
        hand[card][0] = 0;
    }

    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
        case '0': exit(EXIT_SUCCESS);
        case '2': rank = 0; break;
        case '3': rank = 1; break;
        case '4': rank = 2; break;
        case '5': rank = 3; break;
        case '6': rank = 4; break;
        case '7': rank = 5; break;
        case '8': rank = 6; break;
        case '9': rank = 7; break;
        case 't':
        case 'T': rank = 8; break;
        case 'j':
        case 'J': rank = 9; break;
        case 'q':
        case 'Q': rank = 10; break;
        case 'k':
        case 'K': rank = 11; break;
        case 'a':
        case 'A': rank = 12; break;
        default: bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
        case 'c':
        case 'C': suit = 0; break;
        case 'd':
        case 'D': suit = 1; break;
        case 'h':
        case 'H': suit = 2; break;
        case 's':
        case 'S': suit = 3; break;
        default: bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;

        if (bad_card)
            printf("Bad card; ignored. \n");
        else if (hand[cards_read][0] == rank && hand[cards_read][1] == suit)
            printf("Duplicate card; ignored. \n");
        else {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

void analyze_hand(int hand[5][2])
{
    int num_consec = 0;
    int rank, suits;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    // check for flush
    if (hand[0][1] == hand[1][1] && hand[1][1] == hand[2][1] &&
        hand[2][1] == hand[3][1] && hand[3][1] == hand[4][1]) {
        flush = true;
    }

    // check for straight
    // sorting
    selection_sort(hand, 5);

    for (int row = 0; row < 4; row++)
        if (hand[row + 1][0] - hand[row][0] == 1) num_consec++;

    if (num_consec == NUM_CARDS) {
        straight = true;
        return;
    }

    // check for 4, 3 of a kind and pairs
    for (int card = 0; card < 5; card++) {
        if (hand[card][0] == 4) four = true;
        if (hand[card][0] == 3) three = true;
        if (hand[card][0] == 2) pairs++;
    }
}

void print_result(void)
{
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pair");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}

void selection_sort(int hand[5][2], int n)
{
    if (n == 0) return;

    int temp, largest_index = 0;
    for (int i = 0; i < 5; i++) {
        if (hand[i][0] > hand[largest_index][0]) largest_index = i;
    }

    temp = hand[n - 1][0];
    hand[n - 1][0] = hand[largest_index][0];
    hand[largest_index][0] = temp;

    selection_sort(hand, n - 1);
}
