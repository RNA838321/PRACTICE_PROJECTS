#include <stdio.h>

/**
 * write a program that transpose a given matrix
 *
 * Author:Akong Rodney
 * Date:11/22/2022
 * Time:3:55 pm
 *
 */
void main(void)
{
	int transpose[2][3],i,j;

	printf("enter the values of the matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&transpose[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t",transpose[j][i];
		}
		printf("\n");
	}
}
