#include <stdio.h>
struct driver
{
    char name[34];
    char dlno[10];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;

    printf("Enter the details of first driver \n");
    printf("Enter the name of  driver \n");
    scanf("%s", &d1.name);
    printf("Enter the driving licence no of the driver \n");
    scanf("%s", &d1.dlno);
    printf("Enter the no of kilometers travelled \n");
    scanf("%d", &d1.kms);

    printf("Enter the details of second driver \n");
    printf("Enter the name of second driver \n");
    scanf("%s", &d2.name);
    printf("Enter the driving licence no of the driver \n");
    scanf("%s", &d2.dlno);
    printf("Enter the no of kilometers travelled \n");
    scanf("%d", &d2.kms);

    printf("Enter the details of third driver \n");
    printf("Enter the name of third driver \n");
    scanf("%s", &d3.name);
    printf("Enter the driving licence no of the driver \n");
    scanf("%s", &d3.dlno);
    printf("Enter the no of kilometers travelled \n");
    scanf("%d", &d3.kms);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("\n \n \n");
    printf("``` For driver no. 1 ```\n --> Name of the driver : %s \n", d1.name);
    printf(" --> Driving license no of driver is : %s \n", d1.dlno);
    printf(" --> The driver has travelled %d kms \n", d1.kms);
    printf("\n");
    printf("\n");
    printf("\n");

    printf("``` For driver no. 2 ```\n --> Name of the driver : %s \n", d2.name);
    printf(" --> Driving license no of driver is : %s \n", d2.dlno);
    printf(" --> The driver has travelled %d kms \n", d2.kms);
    printf("\n");
    printf("\n");
    printf("\n");

    printf("``` For driver no. 3 ```\n --> Name of the driver : %s \n", d3.name);
    printf(" --> Driving license no of driver is : %s \n", d3.dlno);
    printf(" --> The driver has travelled %d kms \n", d3.kms);

    return 0;
}