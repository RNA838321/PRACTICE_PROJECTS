#include <stdio.h>

//Write a program that prints all possible different combinations of two digits.
//
//Numbers must be separated by ,, followed by a space
//The two digits must be different
//01 and 10 are considered the same combination of the two digits 0 and 1
//Print only the smallest combination of two digits
//Numbers should be printed in ascending order, with two digits
//You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
//You can only use putchar five times maximum in your code
//You are not allowed to use any variable of type char
//All your code should be in the main function
//
//Author: Akong Rodney
//Date: 11/19/2022
//Time:5:08 am.

int main(void)
{
	int num;
	int num1;
	for (num = 48; num <= 56; num++)
	{
		for (num1 = 49; num1 <= 57; num1++)
		{
			putchar(num);
			putchar(num1);
		}
		if ( num1 != 57 || num != 56)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
