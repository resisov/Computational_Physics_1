#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

void sort(int list[], int n);

int main()
{
	int A[4] = {1,9,4,3};
	int B[5] = {5,7,8,2,6};
	int C[9] = {0};

	int cnt;

	// merging array
	for (cnt=0;cnt<9;cnt++)
	{
		if (cnt <4)
		{
			C[cnt] = A[cnt];
		}
		else
		{
			C[cnt] = B[cnt-4];
		}
	}
	sort(C,9);

	// print sorted array
	for (cnt=0;cnt<9;cnt++)
	{
		printf("%d  ", C[cnt]);
	}
	printf("\n");
	
	return 0;
}

// sorting function
void sort(int list[], int n)
{
	int i, j, temp, max;

	for (i=0;i<n-1;i++)
	{
		max = i;
		for (j=i+1;j<n;j++)
			if (list[j] > list[max])
				max = j;

		temp = list[i];
		list[i] = list[max];
		list[max] = temp;
	}
}
