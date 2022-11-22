#include <stdio.h>

/**
 * write a program of 2d array and calculate the sum.
 * Author:Akong, Rodney
 * Date:11/22/2022
 * Time:1:03 pm.
 */
void main(void)
{
	int array[2][5], i, j, sum = 0;

	printf("please enter the values for the matrix\n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d",&array[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t",array[i][j]);
			sum = sum + array[i][j];
		}
		printf("\n");
	}
	printf("%d",sum);
}
