#include <stdio.h>
// // Function with arguement and with return type
// int sum(int a, int b)
// {
//     return a + b;
// }

// // FUNCTION WITH ARGUEMENT WITHOUT RETURN TYPE
// void printstar(int n)
// {
//     for (int j = 0; j < n; j++)
//     {
//         for (int i = 0; i < j; i++)
//         {
//             printf("%c", '*');
//         }
//         printf("\n");
//     }
// }

// FUNCTION WITHOUT ARGUEMENT WITH RETURN TYPE
    int takenumber()
    {
        int i ;
        printf("Enter a number ");
        scanf("%d", &i);
    }
        //*how to call function* --> c= takenumber();

// LAST ONE ---> WITHOUT ARGUEMENT AND WITHOUT RETURN TYPE

int main()
{
    int a, b, c;

    printf("Your program has started \n");
    // scanf("%d", &a);
    // scanf("%d", &b);
    // c = sum(a, b);
    // printf("The sum is %d \n", c);

    scanf("%d", &c); // Void return type function
    printstar(c);

    return 0;
}
