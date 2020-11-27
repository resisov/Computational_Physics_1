#include <stdio.h>
#include <math.h>

int main()
{
	FILE *fp = fopen("data/hw5_prob7.dat","r");

	int cnt = 0;
	float score, sum, mean, var, std;

	while ( !feof(fp))
	{
		fscanf(fp,"%f",&score);
		sum += score;
		cnt++;
	}
	mean = sum / (cnt-1);
	fclose(fp);

	fopen("data/hw5_prob7.dat","r");
	cnt = 0;
	while ( !feof(fp))
	{
		fscanf(fp,"%f",&score);
		var = pow((mean - score),2);
		std += var;
		cnt++;
	}
	printf("nb of evt = %d, mean = %f, stdev = %f\n", cnt-1,mean,sqrt((std/(cnt-1))));
	fclose(fp);
	return 0;
}
