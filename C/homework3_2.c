#include <stdio.h>

//Department of Physics
//Lab 208
//2013020014
//Kim Taiwoo

int main(void)
{
	// define 3 arbitrary value
	float i;
	float j;
	float k;

	// keyboard input
	printf("input 1st value \n");
	scanf("%f", &i);
	printf("input 2nd value \n");
	scanf("%f", &j);
	printf("input 3rd value \n");
	scanf("%f", &k);

	// define results
	float r1;
	float r2;

	// calculation
	r1 = (i < j) ? i : j;
	r2 = (r1 < k) ? r1 : k;

	// print results
	printf("most smallest value is %f \n", r2);

	return 0;
}
