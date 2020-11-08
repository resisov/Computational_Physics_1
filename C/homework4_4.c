#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int main(void)
{
	int floor;
	int i;
	int j;

	// Keyboard input for floor of pyramid
	printf("input an integer to make pyramid\n");
	scanf("%d",&floor);

	// Event Loop
	for (i=0; i<floor; i++)
	{
		// Print Empty
		for (j=floor-1; j>i; j--)
		{
			printf(" ");
		}

		// Print Star
		for (j=0; j<2*i+1; j++)
		{
			printf("*");
		}

		// End of floor
		printf("\n");
	}
	return 0;
}
