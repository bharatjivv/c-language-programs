#include <stdio.h>

int main()
{
    // Take input from user in the form of first term...
    // Centimeters to meters
    // Pound to kgs
    // Inches to meters

    int  n;
    float first, second;
    float miles = 0.6214;
    float foot = 0.0833;
    float inches = 0.3937;
    float kgs = 0.4535;
    float meters = 0.0254;

    printf("Welcome to conversion calculator... \n");

    printf("Press \n 1. kilometers to miles\n 2. inches to foot\n 3. Centimeters to inches\n 4. Pound to kgs\n 5. Inches to meters \n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        // Convert kmstomiles
        printf("Enter the value in terms of first quantity \n");
        scanf("%f", &first);
        second = (float)first * miles;
        printf("%f kilometers is equal to %f miles", first, second);
        break;

    case 2:
        // Convert inchstofoot
        printf("Enter the value in terms of first quantity \n");
        scanf("%f", &first);
        second = first * foot;
        printf("%f Inches is equal to %f foot", first, second);

        break;

    case 3:
        // Convert cmstoinches
        printf("Enter the value in terms of first quantity \n");
        scanf("%f", &first);
        second = first * inches;
        printf("%f Centimeters is equal to %f inches", first, second);

        break;

    case 4:
        // Convert poundstokgs
        printf("Enter the value in terms of first quantity \n");
        scanf("%f", &first);
        second = first * kgs;
        printf("%f Pounds is equal to %f kilograms", first, second);

        break;

    case 5:
        // Convert inchstomtrs
        printf("Enter the value in terms of first quantity \n");
        scanf("%f", &first);
        second = first * meters;
        printf("%f Inches is equal to %f meters", first, second);

        break;

    default:
        printf("You entered incorrect input. Try again ");
        break;
    }

    return 0;
}