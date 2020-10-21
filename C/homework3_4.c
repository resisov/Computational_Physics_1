#include <stdio.h>

//Department of Physics
//Lab 208
//2013020014
//Kim Taiwoo

int main(void)
{

	// define integers
	int input;
	int sec;
	int min;
	int hrs;
	
	// keyboard input
	printf("input your seconds \n");
	scanf("%d", &input);
	
	// calculation time
	hrs = (input >= 3600) ? input / 3600 : 0;
	min = (input >= 60) ? input % 3600 / 60 : 0;
	sec = input % 3600 % 60;
	
	// print time
	printf("%d hrs %d min %d sec \n", hrs, min, sec);

	return 0;
}
