// Self made code 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n + 1;
}

void returnwinner(int playerscore, int compscore)
{
    if (compscore > playerscore)
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~ COMPUTER WON THIS MATCH ~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    }
    else if (compscore == playerscore)
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~ ITS A TIE ~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    }
    else if (compscore < playerscore)
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~ PLAYER WON THIS MATCH ~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    }
}
int main()
{
    int n, i = 0;
    int compscore = 0, playerscore = 0;

    printf("Welcome to rock paper scissors game. \n Rules : \n  Enter the following \n  1. for rock \n  2. for paper \n  3. for scissors \n");

    while (i < 3)
    {

        printf("You chose : ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("You chose : Rock \n");
        }
        else if (n == 2)
        {
            printf("You chose : Paper \n");
        }
        else if (n == 3)
        {
            printf("You chose : Scissor \n");
        }

        int c = generateRandomNumber(3);

        if (c == 1)
        {
            printf("Computer chose : Rock \n");
        }
        else if (c == 2)
        {
            printf("Computer chose : Paper \n");
        }
        else if (c == 3)
        {
            printf("Computer chose : Scissor \n");
        }

        printf("\n \n");

        switch (n)
        {
        case 1: // i.e. rock
            switch (c)
            {
            case 1:
                printf("It is a tie \n");
                break;

            case 2:
                printf("Computer's Point \n");
                compscore++;
                break;

            case 3:
                printf("Player's point \n");
                playerscore++;
                break;
            }
            break;

        case 2: // i.e. paper
            switch (c)
            {
            case 1:
                printf("Player's point \n");
                playerscore++;

                break;

            case 2:
                printf("It is a tie \n");
                break;

            case 3:
                printf("Computer's point \n");
                compscore++;

                break;
            }
            break;

        case 3: // i.e. scissor
            switch (c)
            {
            case 1:
                printf("Computer's point \n");
                compscore++;

                break;

            case 2:
                printf("Player's point \n");
                playerscore++;
                break;

            case 3:
                printf("It is a tie \n");
                break;
            }
            break;
        }
        printf(" \n");
        i++;
    }

    printf("Player's score is ~ %d \n", playerscore);
    printf("Computer's score is ~ %d \n \n", compscore);

    returnwinner(playerscore, compscore);

    return 0;
}