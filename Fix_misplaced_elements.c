#include<stdio.h>
void exchange(int a[], int n);
int main()
{
	int x[10], l, i;
	printf("\nEnter the length of array:");
	scanf("%d", &l);
	printf("\nEnter a sorted array with an error : \n");
	for (i = 0; i < l; i++)
		scanf("%d", &x[i]);
	printf("\nGiven array: \n");
	for (i = 0; i < l; i++)
		printf("%d\t", x[i]);
	exchange(x, l);
	printf("\nCorrected Array : \n");
	for (i = 0; i < l; i++)
		printf("%d\t", x[i]);
	getch();
	return 0;
}
void exchange(int a[], int l)
{
	int t, c = 0, j, t1;
	int i;
	for (i = 0; i < l; i++)
	{
		if (a[i] > a[i + 1])
		{
			t1 = i + 1;
			break;
		}
	}
	for (j = i + 2; j < l; j++)
	{
		if (a[j] <= a[t1])
			break;
	}
	if (j != l)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	else
	{
		t = a[t1];
		a[t1] = a[i];
		a[i] = t;
	}
}
