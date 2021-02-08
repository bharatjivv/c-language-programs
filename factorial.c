#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()

{
    // Recursive approach.
    int numb;
    printf("Enter the number you want factorial of :");
    scanf("%d", &numb);
    printf("The factorial of %d is %d \n", numb, factorial(numb));
    
/*
    // Factorial program iterative approach
    int a, fact;
    printf("Your program has started \n Enter the number you want factorial of :");
    scanf("%d", &a);

    for (int i = (a - 1); i >= 1; i--)
    {
        a = a * i;
    }
        printf("%d", a);
*/

    return 0;
}