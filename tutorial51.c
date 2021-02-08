#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

// Create rock paper scissors game
// Player 1: rock
// Player 2 (computer): scissor --> Player 1 gets one point

// rock vs. scissors --> rock wins
// paper vs. scissors --> scissor wins
// paper vs. rock --> paper wins
// Write a scissor program to allow user to play this game three times with computer.
// Log the scores of computer and the player. Display the name of the winner at the end.
// Note : You have to display the name of the player during the game. Take user name as input.

int main()
{

    return 0;
}