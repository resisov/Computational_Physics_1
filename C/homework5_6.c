#include <stdio.h>
#include <math.h>

// Department of Physics
// Lab 208
// 2013020014
// Kim Taiwoo

int main()
{
	FILE *fp;
	char filename[20];
	int i;
	float j, k, result;

	for (i=1;i<=100;i++)
	{

		if (i<10)
		{
			sprintf(filename,"data/eg-00%d.dat",i);
			fp = fopen(filename,"w");
		
			for (j=0;j<=1000;j++)
			{
				k = j / 100;
				result = pow(sin(k * M_PI / 5), i);
				fprintf(fp,"%f %f\n",k,result);
			}
			fclose(fp);
		}
		else if (i<100)
		{
                        sprintf(filename,"data/eg-0%d.dat",i);
                        fp = fopen(filename,"w");

                        for (j=0;j<=1000;j++)
                        {
                                k = j / 100;
                                result = pow(sin(k * M_PI / 5), i);
                                fprintf(fp,"%f %f\n",k,result);
                        }
                        fclose(fp);
                }
		else
		{
                        sprintf(filename,"data/eg-%d.dat",i);
                        fp = fopen(filename,"w");

                        for (j=0;j<=1000;j++)
                        {
                                k = j / 100;
                                result = pow(sin(k * M_PI / 5), i);
                                fprintf(fp,"%f %f\n",k,result);
                        }
                        fclose(fp);

		}

	}
	return 0;
}
