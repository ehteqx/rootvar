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
  
  //
  // To see the output of this macro, click begin_html <a href="gif/fillrandom.gif">here</a>. end_html
  //
  gROOT->Reset();
  TCanvas * c1 = new TCanvas("c1","The FillRandom example",700,1000);
  c1->SetFillColor(18);


  TPad * pad1 = new TPad("pad1","The pad with the function",0.05,0.50,0.95,0.95,21);
  TPad * pad2 = new TPad("pad2","The pad with the histogram",0.05,0.05,0.95,0.45,21);
  pad1->Draw();
  
  pad1->SetGridx();
  pad1->SetGridy();
  pad1->GetFrame()->SetFillColor(42);
  pad1->GetFrame()->SetBorderMode(-1);
  pad1->GetFrame()->SetBorderSize(5);

  pad2->Draw();
  pad2->GetFrame()->SetFillColor(42);
  pad2->GetFrame()->SetBorderMode(-1);
  pad2->GetFrame()->SetBorderSize(5);
  

  //
  // A function (any dimension) or a formula may reference
  // an already defined formula
  //

  TFormula * form1 = new TFormula("form1","abs(sin(x)/x)");
  
  TF1 * sqroot = new TF1("sqroot","x*gaus(0) + [3]*form1",0,10);
  sqroot->SetParameters(10,4,1,20);
  
  sqroot->SetLineColor(4);
  sqroot->SetLineWidth(6);
  
  pad1->cd();
  sqroot->Draw();

  TPaveLabel * lfunction = new TPaveLabel(5,39,9.8,46,"The sqroot function");
  lfunction->SetFillColor(41);
  lfunction->Draw();
  c1->Update();
  
  //
  // Create a one dimensional histogram (one float per bin)
  // and fill it following the distribution in function sqroot.
  //
  pad2->cd();
  TH1F*  h1f = new TH1F("h1f","Test random numbers",200,0,10);
  h1f->SetFillColor(45);
  h1f->FillRandom("sqroot",10000);
  h1f->Draw();
  c1->Update();
  //
  // Open a ROOT file and save the formula, function and histogram
  //
  TFile myfile("fillrandom.root","RECREATE");
  form1->Write();
  sqroot->Write();
  h1f->Write();
  myfile.Close();
 
}
