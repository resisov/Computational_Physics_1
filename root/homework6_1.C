{
	// Define your parameters
        int lamb;
        double f;
        int lamb_arr[6] = {1,5,10,20,50,100};
        char file[50];
        FILE *fp;

	// Write File Loop
        for (Int_t i=0;i<6;i++)
	{
        	lamb = lamb_arr[i];
        	sprintf(file,"data/ex1-00%d.dat",i+1);
        	fp = fopen(file,"w");

		for (Int_t n=0;n<=100;n++)
		{
			f = pow(lamb,n) * TMath::Exp(-lamb) / (TMath::Factorial(n));
			fprintf(fp,"%d %lf \n",n,f);
	        }
        	fclose(fp);
        }
}

