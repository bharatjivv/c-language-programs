#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char *ptr;
    while (i<3)
    {
        printf("For Employee %d \n", i + 1);
        printf("Enter the number of characters in your Employee Id :");
        scanf("%d", &chars);
        i++;

        ptr = (char*) malloc((chars +1) *sizeof(char));
        printf("Enter your employee id :");
        scanf("%s", ptr);

        printf("Your employee id is %s \n", ptr);

        free(ptr);
    }
    
    return 0;
}