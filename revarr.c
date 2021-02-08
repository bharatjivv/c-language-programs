#include <stdio.h>
#include <stdlib.h>
int n;

void arrayRev(int ptr[])
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp;
        //swap arr[i] with arr[6-i]
        temp = ptr[i];
        ptr[i] = ptr[n - i];
        ptr[n - i] = temp;
    }
}
int main()
{
    int *ptr;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    arrayRev(ptr);

    printf("After reversing the array : \n");
    for (int i = 1; i <= n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}
