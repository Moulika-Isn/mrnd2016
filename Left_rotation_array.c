#include<stdio.h>
void rotate(int s[], int r, int l);
int main()
{
	int i, n, r;
	int a[20];
	printf("\nEnter no. of elements:");
	scanf("%d", &n);
	printf("\nEnter the elements of array:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\nEnter no. of times of rotation: ");
	scanf("%d", &r);
	printf("\nActual Array :\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	rotate(a, r, n);
	printf("\nThe array after rotating %d times : \n", r);
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	getch();
	return 0;
}
void rotate(int s[], int r, int l)
{
	int i, k = 0, temp[5];
	if (r == 0)
	{
		return;
	}
	else if ((r > 0) && (r<l))
	{
		for (i = l - 1; i >= 0; i--)
		{
			temp[k] = s[i];
			k++;
			if (k == r)
				break;
		}
		for (i = l + r - 1; i >= r; i--)
			s[i] = s[i - r];
		r = k;
		for (i = 0; i < r; i++)
		{
			s[i] = temp[k - 1];
			k--;
		}
		return;
	}
	else if ((r < 0) && (r>-l))
	{
		r = -r;
		for (i = 0; i < l; i++)
		{
			temp[i] = s[i];
			if (i == r)
				break;
		}
		for (i = 0; i < l - r; i++)
			s[i] = s[i + r];
		for (i = l - r; i < l; i++)
		{
			s[i] = temp[k];
			k++;
		}
		return;
	}
	else if ((r > l) || (r<-l))
	{
		r = r%l;
		rotate(s, r, l);
	}

}