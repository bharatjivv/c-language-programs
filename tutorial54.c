#include <stdio.h>
#include <stdlib.h>

int *functiondangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main()
{
    // Case 1 : de allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 44;
    ptr[2] = 54;
    ptr[3] = 64;

    free(ptr); // ptr is now a dangling pointer

    // Case 2 : Function returning local variable address
    int *dangptr = functiondangling(); // ptr is now a dangling pointer

    int *danglingptr3;
    // Case 3: if a variable goes out of scope
    {

        int a = 12;

        danglingptr3 = &a;

    }
    // here variable a goes out of scope which means dangling ptr3 is pointing to a location
    // which is free and hence danglingptr3 is now a dangling pointer





        return 0;
}