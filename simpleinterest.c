#include<stdio.h>

int main()
{
    int p, r, t;
    float i;

    printf("Enter the principle \n");
        scanf("%d", &p);
    
    printf("Enter the rate \n");
        scanf("%d", &r);

    printf("Enter time \n");
        scanf("%d", &t);

    i = p*r*(float)t/100 ;
    //typecasting

    printf("The simple interest is %0.3f", i);
    return 0;
}