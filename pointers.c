#include <stdio.h>

int main()
{
    int a = 72;
    int *pointer = &a;
    printf("Lets learn about pointers. \n");

    printf("Pointer pr kya rkha hai ( address of a ) whi print bhi krega : %d \n", pointer);
    printf("Pointer pr jo address hai uski value kya hai ( 72) whi print krega kyuki humne use dereference krdia :%d \n", *pointer);
    printf("Ye address print krega pointer ka naa ki usme rkhe hue a ka address (dono me farak hai ) : %d \n", &pointer);
    printf("Ye btayega a ki value :%d \n", a);
    printf("Ye a ka address batayega (jo ki pointer store krta hai ):%d \n", &a);

    // &(*pointer);
    // Ye kya btayega socho
    // 72 (mtlb a) ka address

    printf("Ye btayega a ka address kyuki humne pointer ko dereference krke uska address lia hai mtlb a ka address lia hai %d \n", &(*pointer));



    return 0;
}