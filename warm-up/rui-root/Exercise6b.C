//
// The left plot returns reasonable chi2/ndf, but the right side doesn't. 
// The result depends on the variable "kScale" in the macro.
//
// The fitting results from the left and the right plots should be 
// the same value mathematically.
//
// See comments in the doc of TGraph::Fit
// http://root.cern.ch/root/html/TGraph.html#TGraph:Fit
// =======
// Note, that the linear fitter doesn't take into account the errors in x. 
// If errors in x are important, go through minuit (use option "F" for polynomial fitting).
// ======= 
//
void graphfit()
{
  gStyle->SetOptFit();
  //  const int kN = 100;
  const int kN = 4;
  const double kScale = 1e-1;
  //  const double kScale = 10;

  TGraphErrors* gra[2];
  for(int i = 0; i < 2; i++){
    gra[i] = new TGraphErrors(kN);
  } // i

  gra[0]->SetTitle(";x;y + #deltay;");
  gra[1]->SetTitle(";y + #deltay;x;");

  for(int i = 0; i < kN; i++){
    double ran = gRandom->Gaus();
    double x = i*kScale;
    double y = (i + ran)*kScale;
    double e = kScale;
    // double e = 0;
    cout << i << " " << x << " " << y << endl;
    gra[0]->SetPoint(i, x, y);
    gra[1]->SetPoint(i, y, x); // change x<=>y
    gra[0]->SetPointError(i, 0, e);
    gra[1]->SetPointError(i, e, 0); // change ex<=>ey
  } // i

  TCanvas* can = new TCanvas("can", "can");
  can->Divide(2, 1);

  for(int i = 0; i < 2; i++){
    can->cd(i + 1);
    gra[i]->Draw("ap");
    gra[i]->Fit("pol1");
    // gra[i]->Fit("pol1","F");
  } // i

}
