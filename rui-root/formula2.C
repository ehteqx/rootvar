#include "TROOT.h"
#include "TF1.h"
#include "Riostream.h"
#include "TCanvas.h"

void formula2(){
   //
 
   gROOT->Reset();
   TCanvas *c1 = new TCanvas("c1","Example with Formula",500,500);
   //
   //
   // Create a one dimensional function and draw it
   //
   TF1 * fun1 = new TF1("fun1","sin(x)/x",0,10);
   c1->cd(1);
   c1->SetGridx();
   c1->SetGridy();
   fun1->Draw();
   c1->Update();

   cout << " Deriv " << fun1->Derivative(2.) << endl;
   cout << " Integral " << fun1->Integral(0.,3.) << endl;
   cout << " Func val " << fun1->Eval(1.2456789) << endl;
 

}
