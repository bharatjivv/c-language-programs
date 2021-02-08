#include <stdio.h>

int main()
{
    int j,n;

    printf("Welcome. \nEnter the number you want multiplication table of :");
    scanf("%d", &n);

    printf("Enter the number till you want multiplication of the number :");
    scanf("%d", &j);

    for (int i = 1; i <= j; i++)
    {
        printf("%d x %d = %d \n", n, i, n*i);
    }
    

    return 0;
}