#include <stdio.h>

int main()
{
    int table;
    printf("Enter a number for Multiplication table\n", table);
    scanf("%d", &table);
    // printf("\n\n %d * 1 = %d\n", table, table*1);
    // printf("\n %d * 2 = %d\n", table, table*2);
    // printf("\n %d * 3 = %d\n", table, table*3);
    // printf("\n %d * 4 = %d\n", table, table*4);
    // printf("\n %d * 5 = %d\n", table, table*5);
    // printf("\n %d * 6 = %d\n", table, table*6);
    // printf("\n %d * 7 = %d\n", table, table*7);
    // printf("\n %d * 8 = %d\n", table, table*8);
    // printf("\n %d * 9 = %d\n", table, table*9);
    // printf("\n %d * 10 = %d\n", table, table*10);
    for ( int i = 0; i < 101; i++)
    {
        printf("%d * %d = %d\n", table, i, table*i);
    }
    
    return 0;
}
