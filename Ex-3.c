#include <stdio.h>

int main()
{
    int mark1;
    printf("Please enter your Maths mark\n");
    scanf("%d", &mark1);
    printf("your maths mark is %d\n", mark1);
   
    int mark2;
    printf("Please enter your science mark\n");
    scanf("%d", &mark2);
    printf("your maths mark is %d\n", mark2);
  
    if (mark1 >= 33)
    {
        printf("you pass in maths exam so will give gift rupee 15\n");
    }
     
     else
     {
        printf("you have fail in maths exam so will not give gift rupee 15\n");
     }
    
    if (mark2 >= 45)
    {
        printf("you pass in science exam so will give gift rupee 15\n");
    }
     
     else
     {
        printf("you have fail in science exam so will not give gift 15\n");
     }

     if (mark1+mark2 >= 45)
     {
        printf("you have pass in both exam so will give first price 45\n");
     }
     
    else
    {
        printf("you have pass in only one exam so will give only rupee 15/n");   
    }
    return 0;
}
