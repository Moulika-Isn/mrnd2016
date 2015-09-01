#include<stdio.h>
int insert(char x[], char y[]);
int main()
{
	char s1[512], s2[512];
	printf("\nEnter a string: ");
	gets(s1);
	printf("\nEnter another string: ");
	gets(s2);
	if (insert(s1, s2)==1)
		printf("Inserted string is : %s", s1);
	else
		printf("\nIncorrect input\n");
	getch();
	return 0;
}
int insert(char x[], char y[])
{
	int l = 0, l1 = 0;
	int i, j, k, s = 0;
	int m, n, p, q;
	m = n = p = q = 0;
	j = x[0];
	while (x[l] != '\0')
		l++;
	while (y[l1] != '\0')
		l1++;
	for (i = 0; i < l; i++)
	{
		if (j == 40)
		{
			if (x[i] == 40)
				m++;
			if (x[i] == 41)
				n++;
		}
		else if ((j == 60) || (j == 91) || (j == 123))
		{
			if (x[i] == j)
				p++;
			if (x[i] - 2 == j)
				q++;
		}
	}
	if (j == 40)
	{
		if (m == n)
		{
			for (k = l + l1 - 1, i = m; i < l; k--)
			{
				x[k] = x[m];
				i++;
			}
			for (k = n; k < n + l1; k++, s++)
				x[k] = y[s];
			x[l + l1] = '\0';
			return 1;
		}
	}
	else if ((j == 60) || (j == 91) || (j == 123))
	{
		if (p == q)
		{
			for (k = l + l1 - 1, i = p; i < l;k--)
			{
				x[k] = x[i];
				i++;
			}
			for (k = q ; k < q + l1; k++, s++)
				x[k] = y[s];
			x[l + l1] = '\0';
			return 1;
		}
	}
	else
		return 0;

}