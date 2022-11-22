#include <stdio.h>

/**
 * program to calculate the number of odd or even values in a given array.
 *
 * Author:Akong Rodney
 * Date:22/11/2022
 * Time:5:51 am
 */
void main(void)
{
	int values[10];
	int even = 0;
	int odd = 0;
	int i;
	printf("please enter the values:\n")
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&values[i]);
	}
	for (i = o; i < 10; i++)
	{ 
		if (values[i] % 2 == 0)
			even = even + 1;
		else
			odd = odd + 1;
	}
	printf("the value of odd numbers are:%d\n",odd);
	printf("the value of even numbers are:%d\n",even);
}
