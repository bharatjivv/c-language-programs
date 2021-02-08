#include <stdio.h>

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    printf("0,1,");
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
        printf("%d,",b);

    }

    return a;
}

int main()
{
    int number;
    printf("Enter the number till you want your series :");
    scanf("%d", &number);
    printf("%d ", fib_iterative(number));

    return 0;
}
