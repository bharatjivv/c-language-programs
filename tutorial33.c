#include <stdio.h>

void starpattern(int rows)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, select;

    printf("Press 0 for star pattern, and press 1 for reverse star pattern \n");
    scanf("%d", &select);

    switch (select)
    {
    case 0:
        printf("How many rows you want ? \n");
        scanf("%d", &rows);
        starpattern(rows);

        break;

    case 1:
        printf("How many rows you want ? \n");
        scanf("%d", &rows);
        reversestarpattern(rows);
        break;

    default:
        printf("You selected an invalid option \n");
        break;
    }

    return 0;
}