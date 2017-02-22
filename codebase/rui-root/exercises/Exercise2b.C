/*Create the "|sin(x)/x|" 1-D function with lower and upper limit (0,10)
 - Draw the 1-D function
 - Compute the value of the function derivative at x=1
 - Compute the function integral between 0 and 10
 - Compute the value of the function at x=1.2456789
*/

#include "TROOT.h"
#include "TF1.h"
#include "Riostream.h"
#include "TCanvas.h"

void Exercise2b(){

  gROOT->Reset();
  TCanvas *c1 = new TCanvas("c1","Example with Formula",500,500);
  //
  //
  // Create a one dimensional function and draw it
  //
  TF1 * fun1 = new TF1("fun1","TMath::Abs(sin(x)/x)",0,10);
  c1->SetGridx();
  c1->SetGridy();
  cout << " Deriv " << fun1->Derivative(1.) << endl;
  cout << " Integral " << fun1->Integral(0.,10.) << endl;
  cout << " Func val " << fun1->Eval(1.2456789) << endl;
  fun1->Draw();
  c1->Update();
}
