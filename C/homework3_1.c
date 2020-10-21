#include <stdio.h>

//Department of Physics
//Lab 208
//2013020014
//Kim Taiwoo

int main(void)
{

	float radius; // set your radius parameter

	printf("input radius \n");
	scanf("%f", &radius); // keyboard input

	float cyl_volume;
	float sph_volume; 
	const float pi = 3.14; // set pi to symbolic constant

	cyl_volume = radius * radius * pi * radius * 2; // cylinder volume
	sph_volume = pi * radius * radius * radius * 4 / 3; // sphere volume

	printf("Volume of Cylinder is %f \n", cyl_volume);
	printf("Volume of Sphere is %f \n", sph_volume);

	float dif;
	dif = cyl_volume - sph_volume; // difference calculation

	printf("Difference is %f \n", dif); // print differnence

	return 0;
}
