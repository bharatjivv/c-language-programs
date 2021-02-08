#include <stdio.h>

int main()
{
    int index=0, num;
    printf("Enter a number \n");
    scanf("%d", &num);

    do
    {
        printf("%d \n", index);
        index = index + 1;
    } while (index < num);

    return 0;
}