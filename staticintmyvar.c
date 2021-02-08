#include <stdio.h>

int b = 34;
int ret()
{
    return 43 * 3;
}

int function(int b1)
{
    static int myvar = 45;
    printf("The value of myvar is %d \n", myvar);
    myvar++;
    return b1 + myvar;
}

int main()
{
    int b = 344;
    int val = function(b);
    val = function(b);
    val = function(b);
    val = function(b);
    val = function(b);
    val = function(b);

    return 0;
}