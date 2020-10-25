#include <stdio.h>
#include <math.h>

//Department of Physics
//Lab 208
//2013020014
//Kim Taiwoo

int main(void)
{
	// define coefficient and root
	int a;
	int b;
	int c;
	float x1;
	float x2;

	// keyboard input
	printf("input square term coefficient \n");
	scanf("%d", &a);
	printf("input first order term coefficient \n");
        scanf("%d", &b);
	printf("input constant term coefficient \n");
        scanf("%d", &c);

	// calculation root
	x1 = (-b + sqrt(b*b-4.0*a*c)) / 2.0 / a;
	x2 = (-b - sqrt(b*b-4.0*a*c)) / 2.0 / a;

	// Discriminant
	float Di;
	Di = b*b-4.0*a*c;

	// define real term and imaginary term for imaginary root
	float Re;
	float Im;

	// calcultation imaginary root
	Re = (-b / (2.0*a));
	Im = sqrt(-(b*b-4.0*a*c)) / (2.0 * a);

	// print results
	Di > 0 ? printf("Real and unequal root \n x1 = %f \n x2 = %f \n", x1, x2) : Di < 0 ? printf("Unequal and imaginary root\n x1 = %f + %f i\n x2 = %f - %f i\n",Re, Im, Re, Im) : printf("Real and Equal root\n x1 = x2 = %f \n", x1);


	

	return 0;
}
