double f1(int n, int N, double p)
{
	double func = TMath::Power(p,n)*TMath::Power((1.0-p),N-n);
	for (int i=1;i<=n;i++,N--)
	{
	func /= i;
	func *= N;
	}
	return func; 
}

double f2(int n, int l)
{
	double func = TMath::Power(l,n)*TMath::Exp(-l);
        for (int i=1;i<=n;i++)
        {
        func /= i;
        }
	return func;
}

double f3(int x, int u, int s)
{
	double func = 1 / TMath::Sqrt(2*3.14*s*s) * TMath::Exp(-1 * TMath::Power((x-u),2) / 2 / s / s );
	return func;
}

void homework6_3()
{
	TCanvas *c = new TCanvas("Canvas");
		

        TF1 *p1 = new TF1("Binomial","f1(x,50,0.5)",0,50);
        p1 -> SetLineColor(kGreen);

	TF1 *p2 = new TF1("Poison","f2(x,25)",0,50);
	p2 -> SetLineColor(kBlue);

	TF1 *p3 = new TF1("Gauss","f3(x,25,5)",0,50);
	p3 -> SetLineColor(kRed);

        //TF1 *p2 = new TF1("p2","(pow(25,x)*pow(TMath::Exp(1),-25))/(TMath::Factorial(x))",0,50);
        //p2 -> SetLineColor(kYellow);

        //TF1 *p3 = new TF1("p3","(1/(sqrt(2*(3.14)*pow(5,2))))*TMath::Exp(-pow(x-25,2)/(2*pow(5,2)))",0,50);
        //p3 -> SetLineColor(kBlue);

	p1 -> SetTitle("Three Distribution Function");
        p1 -> GetXaxis()->SetTitle("Probability Variable");
	p1 -> GetYaxis()->SetTitle("Probability Density");
        p1 -> Draw();
        p2 -> Draw("same");
        p3 -> Draw("same");

  	TLegend *l0 = new TLegend(0.65,0.89,0.90,0.65);
   	l0->SetFillStyle(0);
   	l0->SetBorderSize(0);
 	l0->SetTextSize(0.03);

	TLegendEntry* l01 = l0->AddEntry(p1,"Binomial","l");
	//l01->SetTextColor(p1->GetLineColor());  
	TLegendEntry* l02 = l0->AddEntry(p2,"Poisson" ,"l");
	//l02->SetTextColor(p2->GetLineColor());
        TLegendEntry* l03 = l0->AddEntry(p3,"Gaussian","l");
	//l02->SetTextColor(p3->GetLineColor());

	l0->Draw("same");
}
