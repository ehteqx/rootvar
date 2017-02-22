/*Create and draw a Maxwell function with a parametric TF1
  User Function*/

// define a function with 3 parameters
Double_t fitf(Double_t *x,Double_t *par)
{

  
  if(x[0] > par[1] && par[2] > 0 && par[0] > 0){
    return par[0]*(x[0]-par[1])/par[2]*TMath::Exp(-(x[0]- par[1])/par[2]);
  }
  else
    {
      return 0.;
    }
  // Double_t arg = 0;
  // if (par[2] != 0) arg = (x[0] - par[1])/par[2];
  // Double_t fitval = par[0]*TMath::Exp(-0.5*arg*arg);
  // return fitval;
}


void Exercise4b() {

// Create a TF1 object using the function defined above. The last
//  parameter specify the number of parameters for the function.

  TF1 * func = new TF1("fit",fitf,0,5,3);
  // set the parameters to the mean and RMS of the histogram
  func->SetParameters(500,0.,0.5);
  
  // give the parameters meaningful names
  func->SetParNames ("Constant","Mean_value","Sigma");

  // call TH1::Fit with the name of the TF1 object 
  func->Draw();
}
