/*
*****************************************************************************
                          Workshop - #7 (P1)
Full Name  : Pruthvi Patel
Student ID#: 170733216
Email      : ppatel450@myseneca.ca
Section    : NHH
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAXLENGTH 70
#define MINLENGTH 10
#define MAXLIFE 10
#define MINLIFE 1

struct PlayerInfo
{
    int numOflives;
    char playerSymbol;
    int numOftreasures;
    char history[MAXLENGTH];
    

};

struct GameInfo
{
    int maxMoves;
    int numOfpositions;
    int bombPositions[MAXLENGTH];
    int treasurePositions[MAXLENGTH];

};
int main(void)
{
    int n = 5;
    int i, j;
    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n");
    printf("\n");
    printf("PLAYER Configuration\n");
    printf("--------------------\n");

    
    struct PlayerInfo player;
    
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.playerSymbol);

    do {
        printf("Set the number of lives: ");
        scanf("%d", &player.numOflives);

        if (player.numOflives > MAXLIFE)
        {
            printf("     Must be between 1 and 10!\n");
        }
        else if (player.numOflives < MINLIFE)
        {
            printf("     Must be between 1 and 10!\n");
        }
        else if (player.numOflives >= MINLIFE && player.numOflives <= MAXLIFE)
        {
            printf("Player configuration set-up is complete\n");
        }
    } while (player.numOflives < MINLIFE || player.numOflives > MAXLIFE);



    printf("\n");

    struct GameInfo game;

    printf("GAME Configuration\n");
    printf("------------------\n");
    do {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf(" %d", &game.numOfpositions);
        if (game.numOfpositions <= MINLENGTH)
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
        else if (game.numOfpositions >= MAXLENGTH)
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");

        }
        else if (game.numOfpositions % n != 0)
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }

    } while ((game.numOfpositions < MINLENGTH || game.numOfpositions > MAXLENGTH) || (game.numOfpositions % n != 0));

    do {
        printf("Set the limit for number of moves allowed: ");
        scanf(" %d", &game.maxMoves);
        if (game.maxMoves < 3)
        {
            printf("    Value must be between 3 and 26\n");
        }
        else if (game.maxMoves > 26)
        {
            printf("    Value must be between 3 and 26\n");
        }

    } while (game.maxMoves < 3 || game.maxMoves > 26);

    printf("\n");
    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.numOfpositions);

    for (i = 1; i <= 35; i += 5)
    {
        printf("   Positions [%2d-%2d]: ", i, i + 4);

        for (j = 0; j < 5; j++)
        {
            scanf(" %d", &game.bombPositions[i + j - 1]);
        }
    }
    printf("BOMB placement set\n\n");

    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\n");
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.numOfpositions);

    for (i = 1; i <= 35; i += 5)
    {
        printf("   Positions [%2d-%2d]: ", i, i + 4);

        for (j = 0; j < 5; j++)
        {
            scanf(" %d", &game.treasurePositions[i + j - 1]);
        }
    }
    printf("TREASURE placement set\n\n");

    printf("GAME configuration set-up is complete...\n\n");

    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");
    printf("Player:\n");
    printf("   Symbol     : %c\n", player.playerSymbol);
    printf("   Lives      : %d\n", player.numOflives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n\n");

    printf("Game:\n");
    printf("   Path Length: %d", game.numOfpositions);
    printf("\n");

    printf("   Bombs      : ");
    for (i = 0; i < game.numOfpositions; i++)
    {
        printf("%d", game.bombPositions[i]);
    }
    printf("\n");

    printf("   Treasure   : ");
    for (i = 0; i < game.numOfpositions; i++)
    {
        printf("%d", game.treasurePositions[i]);
    }
    printf("\n\n");

    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");


    
    return 0;
}