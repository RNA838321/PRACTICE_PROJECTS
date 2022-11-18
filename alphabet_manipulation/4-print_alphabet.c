#include <stdio.h>
//Title: program to print alphabets a - z excluding 'e'&'q'
////Author:Akong Rodney
////Date: 11/18/2022
////Time: 1:42pm


int main()
{
	 char i = 'a';
	 char j = 'Z';
	       
	  for(i='a'; i<='z'; i++)
	  {
	  	if(i != 'e' && i != 'q')
		{
			putchar(i);
		}
	  }
	  putchar('\n');
	 return 0;
}
