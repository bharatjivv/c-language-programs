// In this program we have done swapping of two numbers by two methods 1. Call by value 2. Call by reference
// In call by reference method original value of a and b is being changed.

#include <stdio.h>

    void swap(int* x, int* y) // Here we dereferenced the the integer values
    {
        int temp = *x;
        *x = *y; 
        *y = temp;
        return;
        // printf("After swapping a and b are %d and %d respectively ", x, y);
    }
int main()
{
    printf("Here, we swap two numbers \n");
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("Before swapping a and b are %d and %d respectively \n", a, b);
    // swap(a, b);

    // now we will pass it by call by reference 
    swap(&a, &b);
    printf("After swapping a and b are %d and %d respectively \n", a, b);

    return 0;
}