#include<stdio.h>
int diff(char a[], char b[]);
int main()
{
	char x[10], y[10];
	int i;
	printf("\nEnter a number: ");
	gets(x);
	printf("\nEnter another number : ");
	gets(y);
	i = diff(x, y);
	if (i == 0)
		printf("\nNumbers are equal");
	else if (i == 1)
		printf("\nNumber %s is greater", x);
	else if (i == 2)
		printf("\nNumber %s is greater", y);
	getch();
	return 0;
}
int diff(char a[], char b[])
{
	int s1, s2, f, i;
	int n1 = 0, n2 = 0;
	int t;
	//int c, k=-1;
	if (a[0] == '-')
		s1 = 1;
	if (s1 == 1)
		f = 1;
	else
		f = 0;
	//c=1;
	for (i = f; a[i] != '\0'; i++)
	{
		switch (a[i])
		{
		case '0':
			t = 0;
			break;
		case '1':
			t = 1;
			break;
		case '2':
			t = 2;
			break;
		case '3':
			t = 3;
			break;
		case '4':
			t = 4;
			break;
		case '5':
			t = 5;
			break;
		case '6':
			t = 6;
			break;
		case '7':
			t = 7;
			break;
		case '8':
			t = 8;
			break;
		case '9':
			t = 9;
			break;
		default: break;
		}
		/*printf("%d  ",t);
		if(a[i] == '.')
		k=1;
		if(k == 2)
		{
		n1 = n1 + t / (10 * c);
		c++;
		}
		if(k < 1) */
		n1 = n1 * 10 + t;
		/*if(k == 1)
		k++;
		printf("%f %d",n1,t);*/
	}
	if (b[0] == '-')
		s2 = 1;
	if (s2 == 1)
		f = 1;
	else
		f = 0;
	//c=1;
	//k=0;
	for (i = f; b[i] != '\0'; i++)
	{
		switch (b[i])
		{
		case '0':
			t = 0;
			break;
		case '1':
			t = 1;
			break;
		case '2':
			t = 2;
			break;
		case '3':
			t = 3;
			break;
		case '4':
			t = 4;
			break;
		case '5':
			t = 5;
			break;
		case '6':
			t = 6;
			break;
		case '7':
			t = 7;
			break;
		case '8':
			t = 8;
			break;
		case '9':
			t = 9;
			break;
		default: break;
		}
		/*if(b[i]=='.')
		k=1;
		if(k == 2)
		{
		n2 = n2 + t / (10 * c);
		c++;
		}
		if (k < 1)*/
		n2 = n2 * 10 + t;
		/*if (k == 1)
		k++;   */

	}
	if (s1 == 1)
		n1 = -n1;
	if (s2 == 1)
		n2 = -n2;
	printf("\nNumber 1 : %d", n1);
	printf("\nNumber 2 : %d", n2);
	if (n1 > n2)
		return 1;
	if (n1 < n2)
		return 2;
	else
		return 0;
}