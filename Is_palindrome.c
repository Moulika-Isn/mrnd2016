#include<stdio.h>
int palindrome(char s[]);
int main()
{
	int r;
	char str[20];
	printf("\nEnter a string: \n");
	gets(str);
	r = palindrome(str);
	if (r != 0)
		printf("\nThe given string %s is not palindrome ", str);
	else if (r == 0)
		printf("\nThe given string %s is palindrome", str);
	getch();
	return 0;
}
int palindrome(char s[])
{
	int i = 0, l = 0;
	int count = 0;
	while (s[l] != '\0')
		l++;
	l = l - 1;
	while (i < l / 2)
	{
		if (s[i] != s[l - i])
			count++;
		i++;
	}
	return count;
}