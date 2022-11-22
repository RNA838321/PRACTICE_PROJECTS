#include <stdio.h>

/**
 * program to raed two arrays of size 5 and store their sum in a third array
 *
 * Author:Akong Rodney
 * Date: 22/11/2022
 */
void main(void)
{
	int arr1[5],arr2[5],sumArry[5],i;

	printf("please enter the values of the first array:\n");
	for (i = 0; i < 5; i++)
		scanf("%d",&arr1[i]);

	printf("please enter the values of the second arrays:\n");

	for (i = 0; i <5; i++)
		scanf("d",&arry2[i]);

	for (i = 0; i < 5; i++)
	{
		sumArry[i] = arr1[i] + arr2[i];
		printf("the sum of the array of index %d = %d", i, sumArray[i]);
	}
}
