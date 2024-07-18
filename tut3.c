#include <stdio.h>

int main()
{
    int i=9, age;
    printf("Enter Roll number\n");
    scanf("%d", &i);    
    printf("Enter age\n");
    scanf("%d", &age);    
    switch (i)
    {
    case 3:
    printf("The Roll number is 3\n");
    switch (age)
    {
    case 18:
        printf("your marks is 78 out of 80 so you are pass in fainal exam");
        break;
    
    default:
    printf("Please try again");
        break;
    }
        break;
    case 7:
    printf("The Roll number is 7\n");
        break;
    case 19:
    printf("The Roll number is 19\n");
        break;
    
    default:
    printf("The Roll number is not present");
        break;
    }
    return 0;
}
