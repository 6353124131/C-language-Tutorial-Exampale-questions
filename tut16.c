#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is  %d \n", i, array[i]);
    }
    // array[0]= 382;
   void  func2(int* ptr)
   {
       for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is  %d \n", i, *(ptr+i));
    }
        *(ptr + 2) = 34;
   }
}
int main()
{
    int arr[] = {23, 12, 3, 4};
    func2(arr);
    func2(arr);
    // printf("The value at index 0 is %d\n", arr[0]);

    //     func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]); 
    return 0;
}