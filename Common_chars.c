#include<stdio.h>
void common(char x[],char y[]);
int main()
{
	char s1[100], s2[100];
	printf("\nEnter a string : ");
	gets(s1);
	printf("\nEnter a string : ");
	gets(s2);
	common(s1,s2);
	getch();
	return 0;
}
void common(char x[],char y[])
{
	int a[52];
	int l1, l2, i;
	l1 = l2 = 0;
	while (x[l1] != '\0')
		l1++;
	while (y[l2] != '\0')
		l2++;
	for (i = 0; i < l1; i++)
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
	for (i = 0; i < l2; i++)
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
	printf("\nThe characters common are : \n");
	for (i = 0; i < 26; i++)
	{
		if (a[i] == 2)
			printf("%c", 97 + i);
	}
	return;
}