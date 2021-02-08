#include<stdio.h>
    void changevalue(int *address)
    {
        *address = 500;
    }

int main()
{
    int a =34, b = 56;
    printf("The value of a is %d \n", a);
    changevalue(&a);

    printf("The value of a now is %d \n", a);


    return 0;
}

/*
QUICK QUIZ

given two numbers a and b, add them then subtract then and assign them to a and b using
call by reference...

a = 4; 
b = 3;

after running the function, the values should be
a = 7;
b = 1;
*/