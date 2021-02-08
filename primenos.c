// Self made program
#include <stdio.h>
int main()
{
    int nos, remainder;

    printf("Enter the number you want to check \n");
    scanf("%d", &nos);
    if (nos == 1, nos == 0 )
    {
        printf("It is neither prime nor composite number");
        goto terminate;
    }
    else if (nos != 1)
    {

        for (int i = 2; i < nos; i++)
        {
            remainder = nos % i;

            if (remainder == 0)
            {
                printf("~~~~~~~~This is a composite number ~~~~~~~~\n");
                goto finish;
            }

            else
            {
                continue;
            }
        }
    }

    printf("~~~~~~~~This is a prime number~~~~~~~~ \n");

finish:

terminate:

    return 0;
}
