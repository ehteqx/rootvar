// ROOT 6 Macro
// This is a copy of codebase/rui-root/macros/fillrandom.C for local experimentation

#include "TROOT.h"
#include "TF1.h"
#include "TH1F.h"
#include "Riostream.h"
#include "TCanvas.h"
#include "TFormula.h"
#include "TPad.h"
#include "TFile.h"
#include "TFrame.h"
#include "TPaveLabel.h"
#include "TPave.h"

void fillrandom(){

  gROOT->Reset();   // A good coding practice

  TCanvas * c1 = new TCanvas("c1","The FillRandom example",700,1000);
  c1->SetFillColor(18);


  TPad * pad1 = new TPad("pad1","The pad with the function",0.05,0.50,0.95,0.95,21);    // Default pad constructor
  TPad * pad2 = new TPad("pad2","The pad with the histogram",0.05,0.05,0.95,0.45,21);   // NOTE: xup, xdown, yup, ydown in MOTHER PAD reference!
  pad1->Draw();

  pad1->SetGridx();     // They behave just like canvases
  pad1->SetGridy();
  pad1->GetFrame()->SetFillColor(42);       // The GetFrame method sets options on a pad in an abstract way
  pad1->GetFrame()->SetBorderMode(-1);
  pad1->GetFrame()->SetBorderSize(5);

  pad2->Draw();
  pad2->GetFrame()->SetFillColor(42);
  pad2->GetFrame()->SetBorderMode(-1);
  pad2->GetFrame()->SetBorderSize(5);

  // A function (any dimension) or a formula may reference
  // an already defined formula

  TFormula * form1 = new TFormula("form1","abs(sin(x)/x)");         // TFormulas are formulas; TF1 are 1-D functions
                                                                    // --> NOTE: TFormula is the new Cling-based TFormula. May break old compat. If so, use ROOT::v5::TFormula
  TF1 * sqroot = new TF1("sqroot","x*gaus(0) + [3]*form1",0,10);    // gaus() is parametrized. The argument (int) gives the param start
  sqroot->SetParameters(10,4,1,20);                                 // [3] is therefore the lower available new param.

  sqroot->SetLineColor(4);
  sqroot->SetLineWidth(6);

  pad1->cd();       // Direct call: assume control of pad1. cd() with no arguments
  sqroot->Draw();

  TPaveLabel * lfunction = new TPaveLabel(5,39,9.8,46,"The sqroot function");       // Overlaying label
  lfunction->SetFillColor(41);
  lfunction->Draw();
  c1->Update();

  // Create a one dimensional histogram (one float per bin)
  // and fill it following the distribution in function sqroot.

  pad2->cd();
  TH1F*  h1f = new TH1F("h1f","Test random numbers",200,0,10);
  h1f->SetFillColor(45);
  h1f->FillRandom("sqroot",10000);      // Referencing a function
  h1f->Draw();
  c1->Update();

  // Open a ROOT file (binary --> Very efficient!) and save the formula, function and histogram
  // Then, it's viewable with TBrowser GUI

  TFile myfile("fillrandom.root","RECREATE");
  form1->Write();
  sqroot->Write();
  h1f->Write();
  myfile.Close();       // Good coding practice

}
