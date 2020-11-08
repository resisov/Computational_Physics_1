#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int input(void);
int great_com_div(int i, int j);

int main(void)
{
	int i;
	int j;
	int re;

	// Input function	
	i = input();
	j = input();
	
	// Calculate gcd
	re = great_com_div(i, j);

	// Print result
	printf("The greatest common divisor between %d and %d is %d\n",i,j,re);

	return 0;
}

int input(void)
{
	int i;
	printf("input an integer\n");
	scanf("%d",&i);
	return i;
}

int great_com_div(int i, int j)
{
	int a;
	int re = 0;

	// GCD calculation
	for (a=1; a<=i; a++)
	{
		if (i%a == 0)
		{
			if (j%a == 0)
			{
				re = a;
			}
		}
	}
	return re;
}
