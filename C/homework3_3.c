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
	

	// positive to negative
	j = ~i + 1;

	i <= 0 ? printf("only positive integer T.T \n") :  printf("result is %d \n",j);

	return 0;
}

