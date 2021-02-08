#include <stdio.h>

void printstring(char *str)
{
    int i = 0;
    while (str[i] |= '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    char str[34];
    gets(str);

    printf("Printing Using custom function : \n");
    printstring(str);

    printf("\nUsing puts : \n");
    puts(str);

    printf("Using printf : %s ", str);

    return 0;
}
