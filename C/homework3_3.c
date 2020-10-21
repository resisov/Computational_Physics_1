#include <stdio.h>

//Department of Physics
//Lab 208
//2013020014
//Kim Taiwoo

int main(void)
{
	// define integer
	int i;
	int j;

	// keyboard input
	printf("This is a program for positive integer to change negative integer \n");
	printf("input an integer \n");
	scanf("%d", &i);

	// negative integer check
	if (i <= 0)
	{
		printf("only positive integer T.T \n"); // print error
	}
	else
	{	
		j = ~i + 1; // change negative
		printf("result is %d \n", j); // print result
	}

	return 0;
}

