#include <stdio.h>

/**
 * programm to calculate the sum and average of a given number of arrays
 * Author:Akong Rodney
 * Date:22/11/2022
 * time:5:10 pm
 */
void main(void)
{
	int marks[8], i, sum = 0;
	float avg;

	printf("enter the values to be calculated:\n");

	for (i = 0; i < 8; i++)
	{
		scanf("%d",&marks[i]);
	}
	for (i = 0; i < 8; i++)
	{
		sum = sum + marks[i];
	}
	avg = marks[i] / 8
	printf("%d%d",sum,avg);
}
