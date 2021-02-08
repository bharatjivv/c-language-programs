#include <stdio.h>

void quizfunc(int *andu, int *jhandu)
{
    int temp = *andu + *jhandu;
    int simp = *andu - *jhandu;

    *andu = temp;
    *jhandu = simp;
    return;
}

int main()
{
    int a, b;

    printf("Quick quiz program has started \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("The value of a and b is : %d %d \n", a, b);
    quizfunc(&a, &b);
    printf("The value of a and b after applying function is : %d %d \n", a, b);

    return 0;
}