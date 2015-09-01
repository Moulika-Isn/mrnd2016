#include<stdio.h>
void Date_In_Words(int, int, int);
void Day_Word(int day);
void Month_Word(int month);
void Year_Word(int year);
void main()
{
	int day, month, year;
	printf("enter the day in the specified format dd mm yyyy");
	scanf("%d", &day);
	scanf("%d", &month);
	scanf("%d", &year);
	//printf("the date u entered is: %d-%d-%d", day, month, year);
	Date_In_Words(day, month, year);
}
void Date_In_Words(int day, int month, int year)
{
	int x, y, z, i, j, k;
	if (month <= 12 && month > 0)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			if (day <= 31 && day > 0)
			{
				Day_Word(day);
				Month_Word(month);
				Year_Word(year);
			}
		//continue;
			else
			{
				printf("invalid format/invalid date");
			}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			if (day <= 30 && day > 0)
			{
				Day_Word(day);
				Month_Word(month);
				Year_Word(year);
			}
			else
			{
				printf("invalid format/invalid date");
			}
		else if (month == 2)
			if (year % 4 == 0 && day == 29)
			{
				Day_Word(day);
				Month_Word(month);
				Year_Word(year);
			}
			else if (year % 4 != 0 && day <= 28 && day > 0)
			{
				Day_Word(day);
				Month_Word(month);
				Year_Word(year);
			}
			else
			{
				printf("invalidformat/invalid date");
			}
	}
	else
	{
		printf("invalid format/invalid date");
	}

}
void Day_Word(int day)
{
	char	a[][10] = { "one","two","three","four","five","six","seven","eight","nine" };
	char a1[][10] = { "eleven","tewlve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
	char a2[][10] = { "ten","twenty","thirty" };
	if (day > 0 && day < 10)
		printf("%s", a[(day % 10) - 1]);
	if (day > 10 && day < 20)
		printf("%s", a1[(day % 10) - 1]);
	if (day == 10 || day == 20 || day == 30)
		printf("%s", a2[(day / 10) - 1]);
	if ((day > 20 && day < 30) || (day == 31))
	{
		printf("%s", a2[(day / 10) - 1]);
		printf("%s", a[(day % 10) - 1]);
	}
}
void Month_Word(int month)
{
	char a[][15] = { "january","febrauary","march","april","may","june","july","august","september","october","november","december" };
	printf("\t%s", a[(month % 10) - 1]);
}
void Year_Word(int year)
{
	int yr1, yr2, yr3, yr4;
	char y1[][10] = { " ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine " };
	char y2[][9] = { "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen", "Eighteen ", "Nineteen " };
	char y3[][9] = { "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety " };


	if (year > 999 & year < 9999)
	{
		yr4 = year / 1000;
		year = year % 1000;
		printf("  %s Thousand", y1[yr4]);
	}

	if (year>99 && year < 1000)
	{
		yr3 = year / 100;
		yr2 = year % 100 / 10;
		yr1 = year % 100 % 10;
		printf("%s Hundred", y1[yr3]);

		year = year % 100;
	}

	if (year >= 11 && year <= 19)
	{
		printf("%s", y2[year % 11]);
	}
	if (year>20 && year<100)
	{
		yr1 = year / 10;
		yr2 = year % 10;
		printf("%s", y3[yr1 - 1]);
		printf("%s", y1[yr2]);
	}





}