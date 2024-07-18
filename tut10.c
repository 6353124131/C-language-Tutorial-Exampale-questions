#include <stdio.h>
int sum(int a, int b)
{
	return a + b;
}
void printstar(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c", '*');
	}
}

int takenumber()
{
	int i;
	printf("Enter a number:\n");
	scanf("%d", &i);
	return i;
}


int main()
{
	int a, b, c;
	a = 5;
	b = 4;
	
	// c = takenumber();
	// // printstar(7);
	// // c = sum(a, b);
	//  printf("The Enter number is %d \n", c);

	return 0;
}
