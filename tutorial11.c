#include <stdio.h>

int main()
{
    /*
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("The value is 1 \n");
        break;
    case 2:
        printf("The value is 2 \n");
        break;
    case 3:
        printf("The value is 3 \n");
        break;
    case 4:
        printf("The value is 4 \n");
        break;
    case 5:
        printf("The value is 5 \n");
        break;
    case 6:
        printf("The value is 6 \n");
        break;

    default:
        printf("The value doesnt match in any of the above \n ");
        break;
    }
*/

    int age, marks;

    printf("Enter your age \n");
    scanf("%d", &age);

    printf("Enter your marks \n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3 \n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45 \n");
            break;
        
        default:
            printf("Your marks are not 45 \n");
            break;
        }
        break;

    case 13:
        printf("The age is 13 \n");
        break;

    case 23:
        printf("The age is 23 \n");
        break;

    default:
        printf("The age is not 3, 13, 23 \n");
        break;
    }

    return 0;
}