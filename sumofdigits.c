#include<stdio.h>
int main()
{
    int a, b, sum = 0;

    printf("Enter the digit \n");
    scanf("%d", &a);

    while (a!= 0)
    {
        b = a / 10;
        sum = sum + b;
        b == a;
    }
    
    printf("The sum of the digits is : %d", sum);


    return 0;
}