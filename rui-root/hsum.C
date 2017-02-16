#include "TROOT.h"
#include "TH1F.h"
#include "TRandom.h"
#include "TCanvas.h"

void hsum(){

  gROOT->Reset();

  TCanvas * c1 = new TCanvas("c1","The HSUM example",200,10,600,400);
  c1->SetGrid();

  // Create some histograms.
  TH1F * total  = new TH1F("total","This is the total distribution",100,-4,4);
  TH1F * main   = new TH1F("main","Main contributor",100,-4,4);
  TH1F * s1     = new TH1F("s1","This is the first signal",100,-4,4);
  TH1F * s2     = new TH1F("s2","This is the second signal",100,-4,4);
  total->Sumw2();   // this makes sure that the sum of squares of weights will be stored
  total->SetMarkerStyle(21);
  total->SetMarkerSize(0.7);
  main->SetFillColor(16);
  s1->SetFillColor(42);
  s2->SetFillColor(46);
 
  // Fill histograms randomly
  gRandom->SetSeed();  

  // Set the random generator seed. Note that default value is zero, which is
  // different than the default value used when constructing the class.  
  // If the seed is zero the seed is set to a random value 
  // which in case of TRandom depends on the lowest 4 bytes of TUUID 
  // The UUID will be identical if SetSeed(0) is called with time smaller than 100 ns
  // Instead if a different generator implementation is used (TRandom1, 2 or 3)
  // the seed is generated using a 128 bit UUID. This results in different seeds
  // and then random sequence for every SetSeed(0) call.

  const Int_t kUPDATE = 500;
  Float_t xs1, xs2, xmain;
  for ( Int_t i=0; i<10000; i++) {
    xmain = gRandom->Gaus(-1,1.5);
    xs1   = gRandom->Gaus(-0.5,0.5);
    xs2   = gRandom->Landau(1,0.15);
    main->Fill(xmain);
    s1->Fill(xs1,0.3);
    s2->Fill(xs2,0.2);
    total->Fill(xmain);
    total->Fill(xs1,0.3);
    total->Fill(xs2,0.2);
    if (i && (i%kUPDATE) == 0) {
      if (i == kUPDATE) {
	total->Draw("e1p");
	main->Draw("same");
	s1->Draw("same");
	s2->Draw("same");
	c1->Update();
      }
      c1->Modified();
      c1->Update();
    }
  }

  total->Draw("sameaxis"); // to redraw axis hidden by the fill area
  c1->Modified();
}
