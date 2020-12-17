{
	gStyle->SetOptStat(0);
	TH2F *c1 = new TH2F("h1", "Gaussian 2dim",50,-5.,5.,50,-5.,5.);


	for (int i=0;i<1000000;i++)
	{
		float a = gRandom->Gaus(0,1);
		float b = gRandom->Gaus(0,1);

		float x = a;
		float y = (a / 2) + b;

		c1->Fill(x,y);
	}
	c1->Draw("COLZ");
	double co = c1->GetCorrelationFactor();

	cout<< co << endl;
}
