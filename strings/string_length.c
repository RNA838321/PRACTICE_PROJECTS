#include <stdio.h>
#include <string.h>

/**
 * write a program that ches the length of a string without using predefined functions.
 *
 * Author:Akong Rodney 
 * Date:11\24\2022
 * Time:7:54 am
 *
 */
int main()
{
	char name[20];
	int i = 0;
	int count = 0;

	printf("please enter your name\n");
	scanf("%s",name);

	while (name[i] != '\0')
	{
		count++;
		i++;
	}
	printf("%d",count);
}
