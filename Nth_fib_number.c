#include<stdio.h>
int fibanocci(int n);
int main()
{
	int n, r;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	if (n <= 0)
		printf("\nInvalid input\n");
	else
	{
		r = fibanocci(n);
		printf("\n %d Fibonacci Number : %d", n, r);
	}
	getch();
	return 0;
}
int fibanocci(int n)
{
	int a = 0, b = 1, c, i;
	for (i = 3; i <= n;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
