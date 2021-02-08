#include <stdio.h>

int main()
{
    printf("Lets learn about pointers \n");
    int a = 78;
    int *ptra = &a;
    int *ptr2 = NULL; //ptr2;

    printf("ptra mtlb ptra pr kya rakha hai. a ka address%d \n", ptra);
    printf("*ptra lag gya mtlb ptra pr jo stored hai uski value kyuki * denotes for value  %d \n", *ptra);
    printf("&ptra mtlb pointer jo jagah leke betha hai uss jagah ka address %d \n", &ptra);
    printf("a ki value %d \n", a);
    printf("For sure a ka address %d \n", &a);



    printf("ptra ki value print kro hexadecimal form me %x \n", ptra);
    printf("ptra ki value print kro hexadecimal form me %x \n", &ptra);



    printf("The address of some garbage is %p \n", ptr2);



    printf("The address of pointer to a is %p \n", &ptra);
    printf("The address of a is %p \n", &a);
    printf("The address of a is %p \n", ptra);
    printf("The address of some garbage is %p \n", ptr2);
    printf("The value of a is %d \n", *ptra);
    printf("The value of a is %d \n", a);

    return 0;
}