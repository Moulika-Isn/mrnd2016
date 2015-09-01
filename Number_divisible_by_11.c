#include<stdio.h>
void divisible(int num);
int main()
{
	int n;
	//int i;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	divisible(n);
	/*if (i == 1)
	printf("\nNumber %d is divisible by 11",n);
	else if (i == 0)
	printf("\nNumber %d is not divisible by 11",n);*/
	getch();
	return 0;
}
void divisible(int num)
{
	int n = num;
	int i = 0;
	int se = 0, so = 0;
	while (num != 0)
	{
		if (i % 2 == 0)
			se += num % 10;
		else
			so += num % 10;
		num = num / 10;
		i++;
	}
	if (se == so)
	{
		printf("\nNumber is divisible by 11");
		return;
	}
	else
	{
		if (se - so < 11)
		{
			printf("\nNumber is not divisible by 11");
			return;
		}
		else
			divisible(se - so);

	}
}