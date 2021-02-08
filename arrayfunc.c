// In this program we pass an array to a function by two method
// 1. By passing array as a parameter
// 2. By passing array's base address to a pointer
#include <stdio.h>

int func1(int arr[])
{
    // In this method if we change the value of array it gets reflected in main function
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d position of the array is %d \n", i, arr[i]);
    }
    arr[3] = 11123;
}

int func2(int *ptr)
{
    // In this method if we change the value of the array it doesnot gets reflected inside the main function
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d position of the array is %d \n", i, *(ptr + i));
    }
    *(ptr + 2) = 334455;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // func1(arr);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The value at %d position of the array is %d \n", i, arr[i]);
    // }
    func2(arr);
    printf("``````````````````````````````````````` \n");
    printf("``````````````````````````````````````` \n");
    func2(arr);

    printf("After doing all this bakchodi we are again printing the array in the main function to check whether it affected the arrray \n");

    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d position of the array is %d \n", i, arr[i]);
    }

    printf("Yes it has affected the array and one of the values of the array is changed...");
    return 0;
}