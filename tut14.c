#include <stdio.h>

int main()
{
    // int a = 3;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d", ptra + 1);
    int arr[] = {311, 52, 3, 4, 5, 6, 67};
    int *arrayptr = arr;
    printf("Value at position 3 of the  array is  %d \n", arr[3]);
    printf("The address  of first element of the array is %d\n", &arr[0]);
    printf("The address  of first element of the array is %d\n", arr);
    printf("The address  of second element of the array is %d\n", &arr[1]);
    printf("The address  of second element of the array is %d\n", arr + 1);
    printf("The address  of third element of the array is %d\n", &arr[2]);
    printf("The address  of third element of the array is %d\n", arr + 2);
    // arr--;// this line will  throw an error

    printf("The value at address  of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address  of first element of the array is %d\n", arr);
    printf("The value at address  of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address  of second element of the array is %d\n", *(arr + 1));
    printf("The value at address  of third element of the array is %d\n", *(&arr[2]));
    printf("The value at address  of third element of the array is %d\n", *(arr + 2));
    return 0;
}