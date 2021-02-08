#include <stdio.h>

int func1(int b1)
{
    static int myvar = 44;

    //printf("The address of b inside func1 is %d \n", &b);
    //return b * 10;
    printf("The value of myvar is %d \n", myvar);
    myvar++;

    return b1 + myvar;
}
int main()
{
    int b = 344;
    //printf("The address of b inside main is %d \n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    int *ptr = &val;
    printf("The value of func1 is %d \n", func1(b));

    return 0;
}