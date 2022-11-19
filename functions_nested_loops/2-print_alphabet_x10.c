#include "main.h"

/**
 * program to print the alphabets in lower case 10 times.
 * Autho:Akong Rodney
 * Date: 11/19/2022
 * Time:11:27
 *
 * Title:Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 */
void print_alphabet_x10(void);
{
	int i = 0;
	char a;

	while (i < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n')
		i++;
	}
}
			
