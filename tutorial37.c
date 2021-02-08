#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
struct student harry, ravi, shubham;
void print()
{
    printf("%s", harry.name);
}

int main()
{

    struct student harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 466;
    ravi.marks = 366;
    shubham.marks = 266;
    harry.fav_char = 'p';
    ravi.fav_char = 'q';
    shubham.fav_char = 'r';
    strcpy(harry.name, "harry potter student of the year");
    strcpy(shubham.name, "Shubham kumar ");
    strcpy(ravi.name, "ravi bhandhu");

    printf("Harry's name is %s \n", harry.name);
    printf("Harry's marks are %d \n", harry.marks);
    printf("Harry's id is %d \n", harry.id);
    printf("Harry's favourite character is %c \n", harry.fav_char);
        printf(" \n");
    printf("Ravi's name is %s \n", ravi.name);
    printf("Ravi's marks are %d \n", ravi.marks);
    printf("Ravi's id is %d \n", ravi.id);
    printf("Ravi's favourite character is %c \n", ravi.fav_char);
        printf(" \n");
    printf("Shubham's name is %s \n", shubham.name);
    printf("shubham's marks are %d \n", shubham.marks);
    printf("shubham's id is %d \n", shubham.id);
    printf("shubham's favourite character is %c \n", shubham.fav_char);

 
    return 0;
}