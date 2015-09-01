#include<stdio.h>
char last_k(char s[], int k);
int main()
{
	char a[100], k;
	int last, len, i;
	printf("\nEnter a string:\n");
	gets(a);
	printf("\nEnter which last element is required: ");
	scanf("%d", &last);
	for (i = 0; a[i] != '\0'; i++)
		len++;
	if ((last <= 0) || (last>len))
		printf("\nSuch character does not exist\n");
	else
	{
		k = last_k(a, last);
		printf("\nLast %d element : %c", last, k);
	}
	return 0;
}
char last_k(char s[], int k)
{
	char *p, *q;
	int i;
	p = &s[0];
	q = &s[0];
	for (i = 0; i<k; i++)
	{
		p++;
	}
	while (*p != '\0')
	{
		p++;
		q++;
	}
	return *q;
}

