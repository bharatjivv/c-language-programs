#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter any three numbers \n ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b > c)
    {
        printf("A is the greatest of all %d", a);
    }else if (b>c && b>a)
    {
        printf("B is greatest of all %d", b);
    }
    else if (c > a && c>b)
    {
        printf("C is the greatest of all %d", c);
        
    }    

    return 0;
}