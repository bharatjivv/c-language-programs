#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.3;

    void *ptr;
    ptr = &b;

    //printf("The value of a is %d \n", *ptr);           // Void pointer cannot be directly dereferenced

    printf("The value of b  is %f \n", *((float *)ptr)); // void pointer typecasted into integer type pointer
    // Now void pointer can be derefrenced because it has been converted into decimal type

    ptr = &a;
    printf("The value of a is %d \n", *((int *)ptr));
    return 0;
}