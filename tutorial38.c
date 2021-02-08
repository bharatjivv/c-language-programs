#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{

    std s1, s2;
    s1.id = 34;
    s2.id = 89;
    printf("value of s1's id is %d \n", s1.id);
    printf("value of s2's id is %d \n", s2.id);

    //typedef<previous_name> <alias_name>;
    typedef unsigned long ul;
    typedef int integer;
    integer a = 4;
    ul l1, l2, l3;

    printf("Value of a is %d ", a);
    return 0;
}