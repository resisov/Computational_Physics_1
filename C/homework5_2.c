#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int main()
{
	// 2d array
	float matrix[2][2];
	float invmat[2][2];
	// determinant and integer variables for launching "for"
	float det;
	int i,j;

	// input matrix element
	for (i=0;i<2;i++)
	{
		printf("input row %d ",i+1);
		for (j=0;j<2;j++)
		{
			printf("and column %d \n",j+1);
			scanf("%f", &matrix[i][j]);
		}
	}
	// Calculation of determinant
	det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

	// print mat A
        printf("MATRIX A\n");
        printf("%f %f \n",matrix[0][0], matrix[0][1]);
        printf("%f %f \n",matrix[1][0], matrix[1][1]);
        printf("---------------------\n");

	// if inv not exist...
	if (det==0)
	{
		printf("inverse matrix does not exist!\n");
		return 0;
	}

	// input inverse matrix element
	invmat[0][0] = matrix[1][1]/det;
        invmat[0][1] = -matrix[0][1]/det;
        invmat[1][0] = -matrix[1][0]/det;
        invmat[1][1] = matrix[0][0]/det;

	// print inv mat A-1
	printf("INV MATRIX A\n");
        printf("%f %f \n",invmat[0][0], invmat[0][1]);
        printf("%f %f \n",invmat[1][0], invmat[1][1]);
        printf("---------------------\n");

	return 0;
}
