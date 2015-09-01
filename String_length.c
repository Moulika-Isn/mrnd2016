#include<stdio.h>
int length(char*);
void main()
{
	char  s[100];
	int l;
	printf("\nEnter any string : ");
	gets(s);
	l = length(s);
	printf("The length of the given string %s is : %d", s, l);
	getch();
}

int length(char*p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
