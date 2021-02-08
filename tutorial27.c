#include <stdio.h>
int main()
{

    char a = '3';
    char *ptra = &a;
    printf("%d \n", ptra);
    ptra--;
    printf("%d \n", ptra);
    printf("%d", ptra - 2);
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d \n", arr[3]);
    printf("The address of first element of the array is %d \n ", &arr[0]);  //address of 0 (output)
    printf("The address of first element of the array is %d \n", arr);       //address of 0 (output)
    printf("The address of second element of the array is %d \n", &arr[1]);  //address of 1 (output)
    printf("The address of second element fo the array is %d \n ", arr + 1); //address of 1 (output)
    // arr --1 // this line will throw error

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));   // value of address stored at pointer (of 0)
    printf("The value at address of first element of the array is %d \n", arr[0]);       // value of address stored at pointer (of 0)
    printf("The value at address of first element of the array is %d \n", *(arr));       // value of address stored at pointer (of 0)
    printf("The value at address of second element of the array is %d \n ", *(&arr[1])); // value of address stored at pointer (of 1)
    printf("The value at address of second element of the array is %d \n ", arr[1]);     // value of address stored at pointer (of 1)
    printf("The value at address of second element of the array is %d \n ", *(arr + 1)); // value of address stored at pointer (of 1)



    printf("%d \n", ptra);
    printf("%d \n", &a);
    printf("%d \n", &ptra);

    printf("%d \n", ptra + 2);
    printf("%d \n", ptra - 2);

    printf("Value at position 3 of the array is %d \n", arr[2]);
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);
    printf("The address of first element of the array is %d \n", *(arr + 1));
    printf("The address of first element of the array is %d \n", arr[1]);

    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("%d \n", &arr[2]);
    printf("%d \n", &arr[3]);

    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of the first element of the array is %d \n ", arr + 1);
    printf("The address of the first element of the array is %d \n ", &arr[1]);

    printf("This I've printed on my own the value at second element of the array %d \n ", *(arr + 1));
    printf("This I've printed on my own the value at second element of the array %d \n ", arr[1]);

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of ---------- is %d \n", arr[0]);
    printf("%d \n", *(&arr[1]));
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", *(arr + 1));
    printf("The value at %d \n", arr);


    arrayptr++;

    printf("The value at arrayptr is %d \n", &arr);

    return 0;
}