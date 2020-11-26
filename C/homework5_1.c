#include <stdio.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int main()
{
	// Score array
	int scoreArr[] = { 60, 70, 80, 90, 75, 85, 95, 50, 45, 30 };

	// rank array and integer variables for launching "for"
	int rank[10];
	int i,j,cnt;

	// Loop start
	for (i=0;i<10;i++)
	{
		cnt = 0;
		// Comparison of Score for ranking
		for (j=0;j<10;j++)
		{
			if (scoreArr[i] < scoreArr[j]) 
			{
				cnt++;
			}
		}
		rank[i] = cnt+1;
		// Print student number, score, rank
		printf("score of student number %d : %d, Rank : %d\n",i+1,scoreArr[i],rank[i]);
	}
	return 0;
}

