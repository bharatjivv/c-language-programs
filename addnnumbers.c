// This is a program to find the sum of n numbers.
#include <stdio.h>

int main()
{
    int a, sum = 0, nos;

    printf("How many numbers you want to add ?");
    scanf("%d", &a);

    printf("Enter the numbers here : \n");

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &nos);
        sum = sum + nos;
    }

    printf("The sum of entered numbers is %d", sum);

    return 0;
}