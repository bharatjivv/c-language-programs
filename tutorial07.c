#include <stdio.h>
int main()
{
    int a, b;
    a = 2;
    b = 3;

    // Arithmetic operator
    printf("a + b = %d \n", a + b);
    printf("a - b = %d \n", a - b);
    printf("a * b = %d \n", a * b);
    printf("a / b = %d \n", a / b);

    // checking whether a and b are equal or not
    // Because they are not equal the output comes out to be 0
    // If they become equal result will be 1, when we'll check a==b

    printf("Check for Relational operator %d \n", a == b); // Relational operator

    printf("Check for Logical operator (AND operator) %d \n", a && b); // Logical operator (AND operator)
    // ( if both the conditions will be true, then only it will return 1 i.e. true or else 0 i.e. false )

    printf("Check for Logical operator (OR operator) %d \n", a || b); // Logical operator (OR operator)
    // ( if either of the condition becomes true it will return 1 i.e. true )

    printf("Check for Logical operator (NOT operator) %d \n", a | b); // Logical operator (NOT operator)
    // ( NOT operator is just opposite of OR operator, wherever OR operator return 0 NOT will return 1 and vice versa )

    // BITWISE OPERATOR

    printf("Check for bitwise operator %d \n", a & b);





    return 0;
}
