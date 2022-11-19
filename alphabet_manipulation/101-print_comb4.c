#include <stdio.h>

//Write a program that prints all possible different combinations of three digits.
//
//Numbers must be separated by ,, followed by a space
//The three digits must be different
//012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
//Print only the smallest combination of three digits
//Numbers should be printed in ascending order, with three digits
//You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
//You can only use putchar six times maximum in your code
//You are not allowed to use any variable of type char
//All your code should be in the main function
//
//Author: Akong, Rodney
//Date: 11/19/2022
//Time: 6:05 am

int main()
{
	int num;
	int num1;
	int num2;
	for (num = 48; num <= 55; num++)
	{
		for (num1 = 49; num1 <= 56; num1++)
		{
			for (num2 = 50; num2 <= 57; num2++)
			{
				putchar(num);
				putchar(num1);
				putchar(num2);
				putchar(',');
			}
			if (num !=56 || num1 !=56 || num2 !=57)
			{
				putchar(' ');
			}
		}
	}
	return 0;
}
