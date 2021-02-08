/*  
    Make a program in which you have to give gift to students based on the exams they have passed
    if they passed maths/science exam, gift of 15 rs.
    if passed both maths and science exam, gift of 45 rs.
    make this using if else statement and switch statement
*/

#include <stdio.h>

int main()
{
    int num;
    printf(" Take away your gifts : \n");

    printf("Press : \n1. If you passed maths exam \n2. If you passed science exam \n3. If you passed both maths and science exam \n");

    scanf("%d", &num);



    if (num == 1)
    {
        printf("Here is your gift worth Rs.15");
    }
    else if (num == 2)
    {
        printf("Here is your gift worth Rs.15");
    }
    else if (num == 3)
    {
        printf("Here is your gift worth Rs.45");
    }
    else
    {
        printf("Youve entered an invalid number");
    }

    return 0;
}