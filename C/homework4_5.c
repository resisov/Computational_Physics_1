#include <stdio.h>
#include <math.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int main(void)
{
	int i = 1;
	int sum = 0;

	// Calculate sigma and find n
	do
	{
		sum += pow(((3 * i) + 2), 2);
		i++;
	} while (sum < 5205536);

	// Print summation and n
	printf("sum = %d\n",sum);
	printf("n = %d\n",i-1);

	return 0;
}
