#include "main.h"

/**
 * program to print the alphabets in lowercase
 * Author: Akong Rodney
 * Date: 11/19/2022
 * Time: 10:36 pm
 * 
 * the main.h header files contain prototypes for functions written for the consumption ofb alx students
 */

void print_alphabet(void);
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
}
