#include <stdio.h>

int main()
{
    printf("Hello world \n ");
    int marks[4]; // ... value given in input by for loop
    //... we can skip writing the size of array inside bracket (but only in 1d array )

    int stats[6] = {35, 33, 46, 77, 93, 06}; // ... pre declared value in during array declaration

    int data[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array \n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d \n", i, marks[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element of stats is %d \n", i, stats[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("The value of %d,%d element of the array is %d \n", i, j, data[i][j]);
            printf("%d ", data[i][j]);        
        }
        printf("\n");
    }

    /*    marks[0]= 34;
    printf("Marks of student 1 is %d \n", marks[0]);
        marks[0]= 454;
        marks[1]= 43;
        marks[2]= 54;
        marks[3]= 94;
        marks[4]= 76;


    printf("Marks of student 1 is %d \n", marks[0]);
*/
    return 0;
}