#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers : \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is the greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is greatest", c);
    }

    return 0;
}