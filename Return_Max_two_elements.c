#include<stdio.h>
void max2(int a[], int n, int *big, int *sbig);
int main()
{
	int s[10], n;
	int i;
	int *x, *y;
	printf("\nEnter size of array: ");
	scanf("%d", &n);
	printf("\nEnter elements of array : \n");
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	if (s[1] > s[0])
	{
		x = &s[1];
		y = &s[0];
	}
	else
	{
		x = &s[0];
		y = &s[1];
	}

	//x = y = &s[0];
	max2(s, n, x, y);
	printf("\nThe maximum & second maximum elements in the given array are : %d & %d", *x, *y);
	getch();
	return;
}
void max2(int a[], int n, int *big, int *sbig)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (a[i] > *big)
		{
			*sbig = *big;
			*big = a[i];
		}
		else
			*sbig = a[i];
	}
	//printf("\nMaximum : %d \n Second Maximum : %d", big, sbig);
	return;
}