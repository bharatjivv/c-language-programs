#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "a+");
    //char c = fgetc(ptr);
    //printf("The character identity was %c \n", c);

    //c = fgetc(ptr);
    //printf("The character identity was %c \n", c);
    //c = fgetc(ptr);
    //printf("The character identity was %c \n", c);
    //c = fgetc(ptr);
   
    //char str[34];
    //fgets(str, 15, ptr);
    //printf("The string is %s \n", str);

    fputc('o', ptr);

    fputs("this is harry", ptr);


    fclose(ptr);

    return 0;
}