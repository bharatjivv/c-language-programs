#include <stdio.h>

int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.083333;
    float cmstoinches = 0.393781;
    float poundtokgs = 0.0254;
    float inchestometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character, q to quit  \n1. kms to miles  \n2. inches to foot  \n3. cms to foot  \n4. pounds to kg  \n5. inches to meters \n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program \n ");
            break;

        case '1':
            printf("Enter quantity in terms of first unit \n ");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%f kilometers is equal to %f miles \n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit \n ");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f inches is equal to %f foot \n", first, second);
            break;
        case '3':
            printf("Enter quantity in terms of first unit \n ");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f cms is equal to %f inches \n", first, second);
            break;
        case '4':
            printf("Enter quantity in terms of first unit \n ");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f pounds is equal to %f kgs \n", first, second);
            break;
        case '5':
            printf("Enter quantity in terms of first unit \n ");
            scanf("%f", &first);
            second = first * inchestometers;
            printf("%f inches is equal to %f meters \n", first, second);
            break;

        default:
            break;
        }
    }

    return 0;
}
