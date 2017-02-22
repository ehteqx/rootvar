#include "Riostream.h"
#include "TTimer.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TFile.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TNtuple.h"
#include "TCanvas.h"
#include "TPad.h"
#include "TF1.h"
#include "TProfile.h"
#include "TLegend.h"
#include "TString.h"

void ReadTree(){

  TFile *f= new TFile("basic2.root");
  if(!f){
    cout<<"Il file nin esiste"<<endl;
    return;
  }

  
 TTree *tree = (TTree*)f->Get("ttree");
 // modo 1
 TCanvas *c= new TCanvas("c","c");
 c->cd();
 tree->Draw("adc3:tdc3");

 /* 
 Float_t adc1;
 Float_t tdc1;
 Float_t adc2;
 Float_t tdc2;
 Float_t adc3;
 Float_t tdc3;
  
 
 tree->SetBranchAddress("adc1",&adc1);
 tree->SetBranchAddress("tdc1",&tdc1);
 tree->SetBranchAddress("adc2",&adc2);
 tree->SetBranchAddress("tdc2",&tdc2);
 tree->SetBranchAddress("adc3",&adc3);
 tree->SetBranchAddress("tdc3",&tdc3);

 TH1F *h = new TH1F("h","h",10,0,10);

 Int_t nentries = tree->GetEntries();
 cout<<nentries<<endl;
 for(Int_t i = 0; i< nentries; i++){
   tree->GetEvent(i);
   h->Fill(adc1);
 }
 
 TCanvas *c1 = new TCanvas("c1","c1");
 c1->cd();
 h->Draw();
 */
}
