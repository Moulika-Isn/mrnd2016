#include<stdio.h>
void position(int a[], int n, int ele);
int main()
{
	int i, l, x[20];
	int e;
	printf("\nEnter the no. of elements : \n");
	scanf("%d", &l);
	printf("\nEnter a sorted array:\n");
	for (i = 0; i < l; i++)
		scanf("%d", &x[i]);
	printf("\nEnter an element to be inserted: ");
	scanf("%d", &e);
	printf("\nActual array :\n");
	for (i = 0; i < l; i++)
		printf("%d\t", x[i]);
	position(x, l, e);
	printf("\nArray after insertion of %d :\n");
	for (i = 0; i < l + 1; i++)
		printf("%d\t", x[i]);
	getch();
	return;
}
void position(int a[], int n, int ele)
{
	int i, j;
	if (ele < a[0])
	{
		for (i = n; i > 0; i--)
			a[i] = a[i - 1];
		a[0] = ele;
		return;
	}
	else if (ele > a[n - 1])
	{
		a[n] = ele;
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if ((a[i] > ele) && (ele < a[i + 1]))
			{
				for (j = n; j > i; j--)
					a[j] = a[j - 1];
				a[i] = ele;
				return;
			}
		}
	}
}