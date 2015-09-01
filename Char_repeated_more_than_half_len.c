#include<stdio.h>
char repeat(char s[]);
int main()
{
	char s[100];
	char r;
	printf("\nEnter a string :");
	gets(s);
	r = repeat(s);
	if (r != '\0')
		printf("\nCharacter repeated more than n/2 times : %c", r);
	else
		printf("\nSuch character does not exist \n");
	getch();
	return 0;
}
char repeat(char s[])
{
	int i, l = 0, j;
	int count;
	while (s[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		count = 0;
		for (j = 0; j < l; j++)
		{
			if (s[i] == s[j])
				count++;
		}
		if (count > l / 2)
			return s[i];
	}
	return '\0';
}