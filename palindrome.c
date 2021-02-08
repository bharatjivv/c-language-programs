#include <stdio.h>
int new;
void palindrome(int i)
{
    while (new != 0)
    {
    int nos;
    new = i % 10;
    printf("%d", new);
    new = nos;
    }
}

int main()
{
    int start, end;
    // Program to find out palindrome numbers
    printf("Enter the starting point-->");
    scanf("%d", &start);

    printf("Enter the ending point-->");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        printf("%d \n", i);
        palindrome(i);
    }

    return 0;
}