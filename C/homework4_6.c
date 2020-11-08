#include <stdio.h>
#include <math.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

float taylor(float i);

int main(void)
{
	int n = 5;
	float x;

	// Keyboard input for calculation of exp(x)
	printf("input a float 'x' for calculating exp(x)\n");
	scanf("%f",&x);

	// Math Module exp()
	float ex = exp(x);

	// Taylor Expansion
	float tay = taylor(x);
	
	// Print results
	printf("exp(%f) = %f\n", x, ex);
	printf("Taylor expansion with 5th order calculation = %f\n", tay);

	return 0;
}

float taylor(float i)
{
	float t;

	// Taylor appoximation
	// exp(x) = 1 + x/1! + x^2/2! + ...
	t = 1 + i + pow(i,2)/2 + pow(i,3)/6 + pow(i,4)/24 + pow(i,5)/120;
	return t;
}
