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
#include "TArrayF.h"

Int_t nentries(TString name = "name"){
  
  cout<<"file: "<<name<<endl;
  ifstream in;
  in.open(name);
  
  Float_t a1,t1;
  Int_t i = 0;
  
  while (1) {
    in >> a1 >> t1;
    if (!in.good()) break;
    i++;
    //   cout<<i<<endl;
  }

  in.close();
  return i;

}

Float_t vectors(Float_t col1[10000],Float_t col2[10000],Int_t nentries, TString name = "name"){
  
  Float_t a1,t1;

  ifstream in;
  in.open(name);
  
  for(Int_t i = 0; i< nentries;i++){  
    in >> a1 >> t1;
    //    cout<<a1<<" "<<t1<<endl;
    col1[i] = a1;
    col2[i] = t1;
  }
  in.close();
}

void FillTree(){


  const Int_t ne1 = nentries("file1.txt");
  const Int_t ne2 = nentries("file2.txt");
  const Int_t ne3 = nentries("file3.txt");

  Float_t adc1[ne1];
  Float_t tdc1[ne1];

  Float_t adc2[ne2];
  Float_t tdc2[ne2];

  Float_t adc3[ne3];
  Float_t tdc3[ne3];

  vectors(adc1,tdc1,ne1,"file1.txt");
  vectors(adc2,tdc2,ne2,"file2.txt");
  vectors(adc3,tdc3,ne3,"file3.txt");
  
  cout<<"entries 1 "<<ne1<<endl;
  cout<<"entries 2 "<<ne2<<endl;
  cout<<"entries 3 "<<ne3<<endl;

  TFile *f = new TFile("basic2.root","RECREATE");
  
  TTree *T1 = new TTree("ttree","data from ascii file");
  T1->Branch("adc1",adc1,TString::Format("adc1[%i]/F", ne1));
  T1->Branch("tdc1",tdc1,TString::Format("tdc1[%i]/F", ne1));
  T1->Branch("adc2",adc2,TString::Format("adc2[%i]/F", ne2));
  T1->Branch("tdc2",tdc2,TString::Format("tdc2[%i]/F", ne2));
  T1->Branch("adc3",adc3,TString::Format("adc3[%i]/F", ne3));
  T1->Branch("tdc3",tdc3,TString::Format("tdc4[%i]/F", ne3));
  
 
  T1->Fill();
  
  
  T1->Write();
  f->Close();

}

