#include<stdio.h>
int main()
{
    printf("hello world \n");
    int j, i;
    for ( i = 0, j=0; i < 5 ; i++)
    {
        printf("%d %d \n", i, j);
    }
    
    return 0;
}

/* 

    Expression 1, 2, 3 can be optional in for loop 
    Expression 1 is used to initialize the integers 
    Expression 2 is used to terminate the loop or else it will be an infinite loop
    Expression 3 is used to perform an operation in the loop 

*/