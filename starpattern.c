#include <stdio.h>

void starpattern(int lines)
{
    for (int i = 0; i < lines; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversedstarpattern(int lines)
{
    for (int l = 0; l < lines; l++)
    {
        for (int a = 0; a < (lines - l); a++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int lines;
    int nos;
    printf("You've entered the star pattern games \n For printing star pattern prees 1.\n For printing reversed star pattern press 2 :");
    scanf("%d", &nos);

    printf("How many lines of star you want ? ");
    scanf("%d", &lines);

    switch (nos)
    {
    case 1:
        starpattern(lines);
        break;

    default:
        reversedstarpattern(lines);
        break;
    }

    return 0;
}