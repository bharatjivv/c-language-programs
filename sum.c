// This is a program to find a sum from a specific number to a specific number in a timeline 
// Both starting and ending point are set by the user
#include <stdio.h>
int main()
{
    int a, b, x, sum = 0;
    printf("Enter the starting number :");
    scanf("%d", &a);
    a == x;
    printf("Enter the ending number :");
    scanf("%d", &b);

    for (int i = a + 1; i <= b; i++)
    {
        a = a + i;
    }
    printf("The sum total is : %d", a);

    return 0;
}