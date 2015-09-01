#include<stdio.h>
int permutate(char x[], char y[], int l);
int main()
{
	char s1[100], s2[100];
	int l1, l2;
	l1 = l2 = 0;
	printf("\nEnter a string : ");
	gets(s1);
	printf("\nEnter a string : ");
	gets(s2);
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (l1 == l2)
	{
		if (permutate(s1, s2, l1))
			printf("\n%s is a permutation of %s",s1,s2);
		else
			printf("\n%s is not a permutation of %s",s1,s2);
	}
	else
		printf("\n%s is not a permutation of %s",s1,s2);
	getch();
	return 0;
}
int permutate(char x[], char y[],int l)
{
	int a[52];
	int count = 0, i;
	for (i = 0; i < l; i++)
	{
		if ((x[i] >= 65) && (x[i] <= 90))
		{
			a[x[i] - 65] = 1;
		}
		if ((x[i] >= 97) && (x[i] <= 122))
		{
			a[x[i] - 97] = 1;
		}
	}
	for (i = 0; i < l; i++)
	{
		if ((y[i] >= 65) && (y[i] <= 90))
		{
			if (a[y[i] - 65] == 1)
				a[y[i] - 65] = 2;
		}
		if ((y[i] >= 97) && (y[i] <= 122))
		{
			if (a[y[i] - 97] == 1)
				a[y[i] - 97] = 2;
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (a[i] == 2)
			count++;
	}
	if (count == l)
		return 1;
	else
		return 0;
}