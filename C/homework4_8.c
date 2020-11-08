#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo


// Set Global variable;;; Is this best method??
int cnt = 0;
float sum = 0;
float mean = 0;


void calculate(int i);

// Main function Start
int main(void)
{
	while (1)
	{
		int i;

		// Keyboard input
		printf("input an integer\n");
		scanf("%d",&i);

		// if input is zero, "while" break
		if (i == 0)
		{
			break;
		}

		// else, keyboard input "i" interface to calculate()
		else
		{
			calculate(i);
		}
	}

	// if "while" break, print final results
	printf("entries = %d sum = %.0f mean = %f\n",cnt,sum,mean);

	return 0;
}

// Function calculate()
void calculate(int i)
{
	
	// Number of entries
	cnt++;

	// Summation of all arguments
	sum += i;

	// Mean calculation
	mean = sum / cnt;

}	
