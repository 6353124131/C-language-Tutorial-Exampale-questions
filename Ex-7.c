#include <stdio.h>
double kmTomiles(double kilometers)
{
    double miles = kilometers * 0.621371;
    return miles;
}

int main()
{
    double kilometers;

    printf("Enter the number for conversetion of km to mailes:\n");
    scanf("%lf", &kilometers);
    double miles = kmTomiles(kilometers);
    printf("The ans is %.2lf = %.2lf", kilometers, miles);
    return 0;
}
