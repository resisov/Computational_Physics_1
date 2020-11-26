#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int main()
{
	// Define 2d array
	int Arr[5][6] = {{1,2,3,4,5,0},{6,7,8,9,10,0},{11,12,13,14,15,0},{16,17,18,19,20,0},{0,0,0,0,0,0}};

	// set variables
	int i;
	int j;
	int sum;

	// Loop for summation of row
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			sum += Arr[i][j];
		}
		Arr[i][j] = sum;
		sum = 0;
	}

	// Loop for summation of column
	for (i=0;i<5;i++)
	{
		for (j=0;j<4;j++)
		{
			sum += Arr[j][i];
		}
		Arr[j][i] = sum;
		sum = 0;
	}
	
	// Final summation
	Arr[4][5] =Arr[4][0]+Arr[4][1]+Arr[4][2]+Arr[4][3]+Arr[4][4];
	
	// print array elements
	for (i=0;i<5;i++)
	{
		for (j=0;j<6;j++)
		{
			printf("%d  ",Arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
