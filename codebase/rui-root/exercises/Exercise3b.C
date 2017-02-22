/*Write a named script to read the TF1 and TH1F object from
fillrandom.root
Draw the two objects in two pads of the same canvas*/

#include "TCanvas.h"
#include "TFile.h"
#include "TF1.h"
#include "TH1F.h"

void Exercise3b(){

  TCanvas* can = new TCanvas("can", "can");
  can->Divide(2, 1);
  can->cd(1);
  TFile *pippo =new TFile("fillrandom.root","READ");
  TH1F * ph1f = (TH1F *) pippo->Get("h1f");
  ph1f->DrawCopy();
  can->cd(2);
  TF1 * pf = (TF1 *) pippo->Get("sqroot"); 
  pf->DrawCopy();
}
