#include<stdio.h>
void tuple(int a[], int n, int sum);
void main() {
	int i, a[1000],n, sum;
	printf("enter the range \n");
	scanf("%d", &n);
	printf("enter the values \n");
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	printf("enter the sum \n");
	scanf("%d", &sum);
	tuple(a, n, sum);
}
void tuple(int a[], int n, int sum) {
	int i, j, s[1000], count = 0;
	for (i = 0;i <= sum;i++) {
		s[i] = 0;
	}
	for (i = 0;i < n;i++)
	{
		if (a[i] <= sum) {
			if (s[a[i]] == 0)
				s[a[i]] = 1;
		}
	}

	for (i = 0;i <= sum;i++)
		for (j = 0;j <= sum;j++) 
		{
			if (s[j] == 1 && s[i] == 1 ) 
			{
				if (i >= j) 
				{
					if ((i + j) == sum)
						printf("%d %d\n", i, j);
					count++;
				}
			}
		}
	if (count == 0)	
		printf("No tuples found \n");
}
