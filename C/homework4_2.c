#include <stdio.h>
#include <math.h>

int main(void)
{
	// r = distance between Sol and Earth.
	double r = 1.5 * pow(10, 11);

	// m = mass of the Earth
	double m = 5.9742 * pow(10, 24);

	// T = 1 year [sec]
	double T = 3.154 * pow(10, 7);

	// pi = 3.141592...
	double pi = M_PI;

	// F = The Centripetal Force
	double F;

	// Calculation F = mrw^2
	F = 4 * m * r * pi * pi / T / T;
	printf("The Centripetal Force = %lf [N] \n", F);

	return 0;
}
