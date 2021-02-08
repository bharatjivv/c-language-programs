#include <stdio.h>
#include <stdlib.h>

int ispalindrome(int num)
{
    int reversed = 0;
    int originalnumber = num;
    while (num |= 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("The reversed number is %d \n", reversed);
    if (originalnumber == reversed)
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
    int number;
    printf("Enter the number to check palindrome :");
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