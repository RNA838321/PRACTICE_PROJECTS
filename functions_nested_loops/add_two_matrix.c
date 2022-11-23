#include <stdio.h>

/**
 * write a program that add two matrix together.
 * Author:Akong Rodney
 * Date:11/23/2022
 * Time:12:00 am
 *
 */
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("please enter the matrix:\n);

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("please enter the second matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	printf("\n the firt matrix is:");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t",a[i][j]);

		}
		ptintf("\n");
	}
	printf("\n the second matrix is")
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n the third matrix is:");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j+=)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t",c[i][j]);
		}
	}
	return (0);
}
