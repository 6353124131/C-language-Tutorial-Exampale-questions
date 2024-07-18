#include <stdio.h>

int main()
{
    int mark;
    printf("Enter your mark\n");
    scanf("%d", &mark); 
     
     printf("you mark is %d\n", mark);
     if (mark>=33)
     {
        printf("you pass in exam");
     }
     else
     {
        printf("you are fail in exam");
     }
     
     
    return 0;
}
