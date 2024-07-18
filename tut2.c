#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age\n");

    scanf("%d", &age);
    printf("you have enter %d as your age\n", age);
    if (age >= 18)
    {
        printf("you can vote");
    }
    else if (age >= 3)
    {
        printf("You are between 3 to 10 and you can vote for babies");
    } 

    else
    {
        printf("You cannot vote!");
    }

    return 0;
}
