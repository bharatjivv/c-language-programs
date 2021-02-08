#include <stdio.h>
int main()
{
    int i, age;
    /*  
 for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age \n ", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
    }
*/
    for (i = 0; i < 10; i++)
    {

        printf("%d\nEnter your age \n ", i);
        scanf("%d", &age);
        if (age > 10)
        {
            continue;
        }
        printf("We've not came across any continue statement ");
        printf("We've not came across any continue statement ");
        printf("We've not came across any continue statement ");
        printf("We've not came across any continue statement ");
        printf("We've not came across any continue statement ");
        printf("Harry is a good boy ");
    }

    return 0;
}