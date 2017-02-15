/*Create an object of class TH1F and a canvas divided into two Pads
- Fill the histogram with 10000 random numbers distributed according to
Breit - Wigner distribution with :
- Mass Value = 1382.80
- Full Width = 36.0
- Give titles to the X (“Invariant Mass [MeV/c2]”) and Y axis (Counts)
- Draw the histogram
- Compute the histogram bin integral
- Normalize the histogram
- Redraw the histogram in a new pad of the canvas
*/

#include "TROOT.h"
#include "TH1F.h"
#include "TRandom.h"
#include "TCanvas.h"

void Execise1b(){

  gROOT->Reset();

  TCanvas * c1 = new TCanvas("c1","The HSUM example",400,800);
  c1->Divide(1,2);
  c1->cd(1);

  // Create some histograms.
  TH1F * main   = new TH1F("main","Main contributor",100,1382.-3.*36.,1382.+3.*36.);
  
  // Fill histograms randomly
  gRandom->SetSeed();
  
  Float_t xs1;
  for ( Int_t i=0; i<10000; i++) {
    xs1   = gRandom->BreitWigner(1382.0, 36.0);
    main->Fill(xs1);
  }

  main->SetXTitle("Invariant Mass [GeV/c^{2}]");
  main->SetYTitle("Counts");

  //OR
  // main->GetXaxis()->SetTitle("Invariant Mass [GeV/c^{2}]");
  // main->GetYaxis()->SetTitle("Counts");


  main->DrawCopy(); // to redraw axis hidden by the fill area
  c1->Modified();
  c1->Update();
  
  c1->cd(2);
  TH1F * norm = (TH1F *) main->Clone("norm");
  norm->Scale(1./norm->Integral());
  norm->DrawCopy();
}

