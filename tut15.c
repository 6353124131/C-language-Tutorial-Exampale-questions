#include <stdio.h>
void chamgeValue(int *address)
{
     *address = 345;
}

int main()
{
    int a = 34, b = 56;
    printf("The value of a now  is %d\n", a);
    chamgeValue(&a);
    printf("The value of a now  is %d\n", a);

    return 0;
}
