#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
//this program accepts three characters from the user

char c;
char d;
char e;
int main(void)
{
	printf("please enter three characters:\n");
	c = getchar();
	d = getchar();
	e = getchar();

	printf("%c\n%i\n%d",c,d,e);
	return (0);
}
