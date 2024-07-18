#include <stdio.h>

int main()
{
    int i, age;
   for ( i = 0; i < 5; i++)
   {
     printf("intretion time=%d\nEnter your age:\n", i);
     scanf("%d", &age);
    //  if (age>10) 
	// 	{ 
	// 		break; // Checking Break Statement 
	// 	}
     
     if (age<10)
     {
        continue;
     }
     printf("Hey guys\n");
     printf("This code is printed coz if condition is not satified.\n");
     printf("Checking Continue Statement\n\n");
     
     
   }
   
    return 0;
}
