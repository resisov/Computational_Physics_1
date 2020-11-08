#include <stdio.h>
#include <math.h>

int main(void)
{
	// m = mass of an electron
	double m = 9.31 * pow(10.0, -31);

	// k = Coulomb constant
	double k = 8.99 * pow(10.0, 9);

	// e = elementary change
	double e = 1.60 * pow(10.0, -19);

	// r = radius
	double r = 5.29 * pow(10.0, -11);

	double v;

	// Linear velocity of Bohr model
	v = sqrt(k * e * e / m / r);
	printf("Classical linear velocity of e in H = %lf [m/s]\n", v);

	return 0;
}
