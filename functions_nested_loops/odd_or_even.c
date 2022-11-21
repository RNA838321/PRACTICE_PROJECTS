#include <stdio.h>

/**
 * write a function that checks of a value entered is odd or even.
 * Author:Akong Rodney
 * Date:11/21/2022
 * Time:2:41 pm
 */
void number(int);
void main(void)
{
	int g;
	printf("please enter a value\n);
	scanf("%d",&g);
	number(g);
}
void number(int b)
{
	if (b % 2 == 0)
	{
		printf("the value entered is an even number);
	}
	else if (b % 2 == 1)
	{
		printf("the value entered is an odd number");
	}
}
