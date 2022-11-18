#include <stdio.h>

//Title:Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
//
//You are not allowed to use any variable of type char
//You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
//You can only use putchar twice in your code
//All your code should be in the main function
//
//Author: Akong Rodney Ntol
//Date: 11/18/22
//Time: 2:42pm

int main ()
{
	int a = 48;//this program will use ascii values: and the ascii value of 0-9 is 48-57.

	//using the for loop
	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n);
}
