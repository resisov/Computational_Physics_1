#include <stdio.h>

//Department of Physics
//Lab 208
//2013020014
//Kim Taiwoo

int main(void)
{
	// define real number as double
	double i;
	double j;
	double k;
	
	// keyboard input 
	printf("input your real number \n");
	scanf("%lf", &i);

	// rounds calculation
	j = i * 100;
	k = ((int)j % 10) >= 5 ? (int)(i*10+1)/10.0 : (int)(i*10)/10.0;

	// print result
	printf("Rounds calculation = %.1lf \n", k);

	// same result
	printf("direct method = %.1lf \n", i);


	return 0;
}

