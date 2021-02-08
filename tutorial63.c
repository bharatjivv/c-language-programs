#include <stdio.h>
#include <stdlib.h>

int ispalindrome(int number)
{
    return 0;
}

int main()
{
    int number;
    printf("Enter the number to check whether it is a palindrome or not :");
    scanf("%d", &number);

    // Your task is to check whether the number is a palindrome or not

    if (ispalindrome(number))
    {
        printf("The number is a palindrome \n");
    }
    else
    {
        printf("The number is not a palindrome \n");
    }

    return 0;
}