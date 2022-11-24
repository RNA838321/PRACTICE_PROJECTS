#include <stdio.h>
#include <string.h>

/**
 * write a prograsm that thet claculates the length of a string
 *
 * thi project uses pre-defined function: @strlen found in the string.h header file
 * Author:Akong Rodney
 * Date:11/24/2022
 * Time:8:42 am
 */

int main()
{
	char name[10];
	int s = 0;

	printf("please enter the string");
	scanf("%s",name);

	s = strlen(name);
	printf("%d",s);
	
	return (0);
}
