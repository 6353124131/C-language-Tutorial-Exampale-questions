#include <stdio.h>
#include <stdlib.h>
/* This is simple intrest formul testing*/
int main()
{
    int p, n;
    float r, si;

    // p = 1000;
    // n = 3;
    // r = 8.5;

    printf("Enter p:");
    scanf("%d", &p);

    printf("\nEnter n:");
    scanf("%d", &n);

    printf("\nEnter r:");
    scanf("%f", &r);

    si = p * r * n / 100;

  printf("%f\n", si);
    return 0;
}