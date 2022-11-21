#include <stdio.h>

/**
 * function that accepts two float values from the user
 *
 * Author:Akong Rodney Ntol
 * Date:11/21/2022
 * Time: 1:53pm
 */
void sum(float ,float);
void main()
{
	float x;
	float y;
	printf("please enter two integers\n");
	scanf("%f%f",&x,&y);
	sum(x,y);
}
void sum(float x, float y)
{
	float s; 
	s = x + y; 
	printf("%f",s); 
}
