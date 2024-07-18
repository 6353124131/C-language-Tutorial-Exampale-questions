#include <stdio.h>

int main()
{

    int myNumber[2][7] = {{25, 50, 75, 100}, {2, 5, 7, 8}};
    int i, j;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", myNumber[i][j]);
        }
    }

    // myNumber[0][0] = 9;
    //  myNumber[0] = 33;
    //  myNumber[1] = 34;
    //  myNumber[2] = 45;
    //  myNumber[3] = 43;
    //  printf("%d", myNumber[3]);
    //  int i;

    // for (i = 0; i < 4; i++)
    // {
    // printf("%d\n", myNumber[0][0]);
    // }
    return 0;
}