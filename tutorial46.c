#include <stdio.h>

struct driver
{
    char name[34];
    char dlno[45];
    char route[47];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;
    printf("Enter the details of the Driver no. 1 \n");
    
    printf("Enter the name of first driver \n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of first driver \n");
    scanf("%s", &d1.dlno);

    printf("Enter the route of first driver \n");
    scanf("%s", &d1.route);

    printf("Enter the no of kms travelled by first driver \n");
    scanf("%s", &d1.kms);


    printf("Enter the details of the Driver no. 2 \n");
    
    printf("Enter the name of Second driver \n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of Second driver \n");
    scanf("%s", &d2.dlno);

    printf("Enter the route of Second driver \n");
    scanf("%s", &d2.route);


    printf("Enter the no of kms travelled by Second driver \n");
    scanf("%s", &d2.kms);


    printf("Enter the details of the Driver no. 3 \n");
    
    printf("Enter the name of Third driver \n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of Third driver \n");
    scanf("%s", &d3.dlno);

    printf("Enter the route of Third driver \n");
    scanf("%s", &d3.route); 


    printf("Enter the no of kms travelled by Third driver \n");
    scanf("%s", &d3.kms);


    printf("******   Printing informatiion of these drivers  ******** \n");

    printf("For Driver No. 1 \n Name is %s \n", d1.name);
    printf("Driving license no. is %s\n", d1.dlno);
    printf("Route is %s\n", d1.route);
    printf("Kms travelled is %d \n", d1.kms);


    printf("For Driver No. 2 \n Name is %s \n", d2.name);
    printf("Driving license no. is %s\n", d2.dlno);
    printf("Route is %s\n", d2.route);
    printf("Kms travelled is %d \n", d2.kms);

    
    printf("For Driver No. 3 \n Name is %s \n", d3.name);
    printf("Driving license no. is %s\n", d3.dlno);
    printf("Route is %s\n", d3.route);
    printf("Kms travelled is %d \n", d3.kms);


    return 0;
}