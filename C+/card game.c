#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_CARDS 52
#define ACE_VALUE 11
#define FACE_CARD_VALUE 10

int main()
{
    int deck[MAX_CARDS];
    int player_hand[10];
    int dealer_hand[10];
    int player_hand_size = 0;
    int dealer_hand_size = 0;
    int player_total = 0;
    int dealer_total = 0;
    char input;
    int i;

    srand(time(0)); // Seed the random number generator

    // Initialize the deck
    for (i = 0; i < MAX_CARDS; i++) {
        deck[i] = i % 13 + 1;
        if (deck[i] > 10) {
            deck[i] = FACE_CARD_VALUE;
        }
    }

    // Shuffle the deck
    for (i = 0; i < MAX_CARDS; i++) {
        int j = rand() % MAX_CARDS;
        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }

    // Deal the initial hands
    player_hand[player_hand_size++] = deck[0];
    dealer_hand[dealer_hand_size++] = deck[1];
    player_hand[player_hand_size++] = deck[2];
    dealer_hand[dealer_hand_size++] = deck[3];

    // Calculate the initial totals
    player_total = player_hand[0] + player_hand[1];
    dealer_total = dealer_hand[0] + dealer_hand[1];

    // Player's turn
    while (1) {
        printf("Your hand: ");
        for (i = 0; i < player_hand_size; i++) {
            printf("%d ", player_hand[i]);
        }
        printf("\n");
        printf("Dealer's hand: %d ?\n", dealer_hand[0]);
        printf("Total: %d\n", player_total);
        printf("Hit or stand? (h/s) ");
        scanf(" %c", &input);
        if (input == 'h') {
            player_hand[player_hand_size++] = deck[player_hand_size + dealer_hand_size];
            player_total += player_hand[player_hand_size - 1];
            if (player_total > 21) {
                printf("Bust! You lose.\n");
                return 0;
            }
        } else {
            break;
        }
    }

    // Dealer's turn
    while (dealer_total < 17) {
        dealer_hand[dealer_hand_size++] = deck[player_hand_size + dealer_hand_size];
        dealer_total += dealer_hand[dealer_hand_size - 1];
    }

    // Determine the winner
    printf("Your hand: ");
    for (i = 0; i < player_hand_size; i++) {
        printf("%d ", player_hand[i]);
    }
    printf("\n");
    printf("Dealer's hand: ");
    for (i = 0; i < dealer_hand_size; i++) {
        printf("%d ", dealer_hand[i]);
    }
    printf("\n");
    printf("Total: %d\n", player_total);
    printf("Dealer total: %d\n", dealer_total);
    if (dealer_total > 21 || player_total > dealer_total) {
        printf("You win!\n");
    } else if (dealer_total > player_total) {
        printf("Dealer wins.\n");
    } else {
        printf("Push.\n");
    }

    return 0;
}

