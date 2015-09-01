#include<stdio.h>
int sum(int num);
void main()
{
	int n, s;
	printf("\nEnter a number: \n");
	scanf("%d", &n);
	s = sum(n);
	printf("\nThe sum of digits in the number %d is : %d\n", n, s);
	getch();
	return;
}
int sum(int num)
{
	int r, s = 0;
	while (num != 0)
	{
		r = num % 10;
		num = num / 10;
		s += r;
	}
	return s;
}