#include <stdio.h>

void hello(void)
{
    printf("Hello user, Welcome to the program of functions \n");
    printf("In this program you can find the area of any surface \n");
    printf("Enter the surface you want to find area of ? \n");
    printf(" 1. Area of circle \n 2. Area of rectangle \n 3. Area of square \n 4. Area of triangle \n");
}

float areaofcircle(float radius)
{
    return 3.14 * radius * radius;
}

float areaofrectangle(float length, float breadth)
{
    return length * breadth;
}

float areaofsquare(float side)
{
    float a = side * side;
    return a;
}
float areaoftriangle(float base, float height)
{
    return 0.5 * base * height;
}
int main()
{
    int choice;
    float radius;
    float length, breadth;
    float side;
    float base, height;
    printf("A program has stated which is working only on the basis of functions \n");

    hello();

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the radius of circle \n");
        scanf("%f", &radius);
        printf("The area of circle is : %f", areaofcircle(radius));
        break;

    case 2:
        printf("Enter the Length and breadth of rectangle \n");
        scanf("%f %f", &length, &breadth);
        float c = areaofrectangle(length, breadth);
        printf("Area of rectangle is : %f", c);
        break;

    case 3:
        printf("Enter the side of square : \n");
        scanf("%f", &side);
        printf("The area of square is : %f", areaofsquare(side));
        break;

    case 4:
        printf("Enter the base and height of triangle \n");
        scanf("%f %f", &base, &height);
        printf("The area of triangle is : %f", areaoftriangle(base, height));
        break;

    default:
        printf("Sorry, wrong input \n");
        break;
    }

    return 0;
}