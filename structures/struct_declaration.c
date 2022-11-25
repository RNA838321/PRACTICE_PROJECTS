#include <stdio.h>

/**
 * write a prpogram that declears and initializes structurers
 *
 * Author:Akong Rodney
 * Date:11/25/2022
 * Time:11:39 pm
 *
 */
	struct student
	{
		int age;
		char name[30];
		float debt;
	};
	struct student rodney = {20,"Akong",5000};

int main()
{
	printf("%d%s %f\n",rodney.age,rodney.name,rodney.debt);
	return (0);
}

