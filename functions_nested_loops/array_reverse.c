#include <stdio.h>

/**
 * printing of arrays in reverse format
 * Author:Akong Rodney 
 * Date: 22/11/2022
 * Time: 4:45am
 */
void main(void)
{
	int a[7],i;
	printf("please enter the values of arrays:\n");

	for (i = 0; i < 7; i++)
	{
		scanf("%d",&a[i]);
	}

	for (i = 6; 1 >=0; i--)
	{
		printf("%d",a[i]);
	}
}
