#include <stdio.h>

//Write a program that prints the lowercase alphabet in reverse, followed by a new line.
//
//You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
//All your code should be in the main function
//You can only use putchar twice in your code
//
//Author: Akong Rodney
//Date:18/11/2022
//Time: 4:52 pm
//
int main(void)
{
	char i = 122;// printing the alphabet in reverse using the ascii values.

	//using the for loop
	//note the ascii value of alphabets in lowercase starts from 97-122,
	
	for (i = 122; i <= 97; i--) //the decrment optor is used to print the output n reverse
	{
		putchar(i);
	}
	putchar('\n');
}

