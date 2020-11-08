#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo


// Used functions
int input(void);
int prime(int j);

// Main Function
int main(void)
{
	int in;

	// Loop for finding prime number
	while (1)
	{
		// Use input()
		in = input();

		// Core protect
		if (input <= 0)
		{
			continue;
		}
		
		// Print prime number
		if (prime(in) == 1)
		{
			printf("%d is prime number.\n", in);
			break;
		}

		// Continue
		else
		{
			continue;
		}
	}

	return 0;
}

int input(void)
{
	int i;

	// Keyboard input
	printf("input an integer\n");
	scanf("%d",&i);
	return i;
}

int prime(int j)
{
	int cnt;

	// Prime number calculation
	for (cnt = 2; cnt <= j; cnt++)
	{
		if (j % cnt == 0)
		{
			if (j == cnt)
			{
				return 1;
			}
			if (j != cnt)
			{
				return 0;
			}
		}			
	}
	return 0;
}
