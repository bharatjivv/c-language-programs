#include <stdio.h>

int main()
{
    int nos;

    printf("How many star pattern lines do you want to print ? \n");
    scanf("%d", &nos);
    // Star pattern
    for (int i = 0; i < nos; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Reversed star pattern

    printf("How many reversed star pattern lines do you want ? \n");
    scanf("%d", &nos);
    for (int k = 0; k < nos; k++)
    {
        for (int z = nos - k; z > 0; z--)
        {
            printf("*");
        }
        printf("\n");
    }

    // int a, b, c;
    // printf("Logical operator program has started \n");
    // scanf("%d", &a);
    // scanf("%d", &b);

    // if (a&&b)
    // // If any of the value becomes zero it returns false
    // {
    //     printf("true \n");
    // }
    // else
    // {
    //     printf("false \n");
    // }

    //Multiplication table program

    // int i = 1, a;
    // int nos;
    // printf("Welcome To the multiplication table. \n");

    // printf("Enter the no you want multiplication table of :");
    // scanf("%d", &nos);

    // printf("Enter till you want your multiplication table :");
    // scanf("%d", &a);

    // while (i <= a)
    // {
    //     printf("%d X %d = %d \n", nos, i, nos * i);
    //     i++;
    // }

    // Printing star pattern

    return 0;
}