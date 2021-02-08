#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    // For rock paper scissors
    // Return 1 if c1>c2  and 0 otherwise. if c1 == c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }

    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }

    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the rock, paper, scissor game \n");

    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input
        printf("Player 1's turn : \n");
        printf("Choose 1 for Rock, 2 for Paper, 3 for Scissor \n");
        scanf("%d\n", &temp);
        printf("You chose %c \n", playerchar);
        playerchar = dict[temp - 1];

        // Generate computer's input
        printf("Computer's turn : \n");
        printf("Choose 1 for Rock, 2 for Paper, 3 for Scissor \n");
        temp = generaterandomnumber(3) + 1;
        compchar = dict[temp - 1];

        //compare the scores
        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
        }
        else
        {
            playerscore += 1;
        }
    }

    return 0;
}
