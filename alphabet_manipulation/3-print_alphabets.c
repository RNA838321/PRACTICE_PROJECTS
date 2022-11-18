#include <stdio.h>

//Author: Akong Rodney 
//Date: 11/18/2022
//Time: 12:47pm.
//Title: A program that prints alphabets in lowercase followed bt uppercase.

void main(void)
{
	  char i = 'a';
	     char j = 'Z';
	        
	        for (i='a'; i<='z'; i++)
			       putchar(i);
		   for (j='A'; j<='Z'; j++)
			          putchar(j);
		      putchar('\n');
}
