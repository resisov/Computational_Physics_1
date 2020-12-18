{
	// Define parameters and arrays
	int n;
	float p, f;
	int n_arr[] = {5, 10, 20, 20, 20, 20};
	float p_arr[] = {0.5, 0.5, 0.5, 0.2, 0.3, 0.4};
	char file[20];
	FILE *fp;

	// Color array for coloring graph lines
	int color[] = {1, 2, 3, 4, 5, 6, 7};

	// Global loop
	for(Int_t i=0;i<6;i++)
	{
		// File write named afer sprintf
		sprintf(file,"data/ex2-00%d.dat",i+1);
		n = n_arr[i];
		p = p_arr[i];
		fp = fopen(file,"w");

		// Function loop 
		for (Int_t k=0;k<=n;k++)
		{
			f = (TMath::Factorial(n)/((TMath::Factorial(k))*(TMath::Factorial(n-k))))*pow(p,k)*pow(1-p,n-k);
			fprintf(fp,"%d %f \n", k, f);
		}
		fclose(fp);

		// Draw Graphs
		TGraph *p = new TGraph(file);

		if (i==0)
		{
			p->SetTitle("Binomial Distribution");
			p->GetXaxis()->SetTitle("k parameter");
			p->GetXaxis()->SetLimits(0,20);
			p->GetYaxis()->SetTitle("Probability Density");
			p->SetLineColor(color[i]);
			p->Draw();
		}
		else
		{
			p->SetLineColor(color[i]);
			p->Draw("same");
		}
	}

}
