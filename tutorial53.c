#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr;
    int c = 44;
    if (ptr != NULL)
    {
        printf("The address of a is %d \n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be derefrenced \n");
    }

    return 0;
}