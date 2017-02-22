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

void FillNtuple() {

  //   Example of macro to read data from an ascii file and
  //   create a root file with an histogram and an ntuple
  
  gROOT->Reset();

  //

  ifstream in;

  //   We assume a file run_1.dat in the current directory
  //   this file has 8 columns of float data

  in.open("run_1.dat");

  Float_t a1,a2,a3,a4, t1,t2,t3,t4;
  Int_t nlines = 0;

  TFile *f = new TFile("run_1.root","RECREATE");
  TNtuple *ntuple = new TNtuple("ntuple","data from ascii file","adc1:adc2:adc3:adc4:tdc1:tdc2:tdc3:tdc4");
 
  while (1) {
    
    in >> a1 >> a2 >> a3 >> a4 >> t1 >> t2 >> t3 >> t4 ;
    
    if (!in.good()) break;
    
    if (nlines < 5) cout << " adc1 " << a1 << " adc2 " << a2 << " adc3 " << a3 << " adc4 " << a4 << " tdc1" << t1 << " tdc2 " << t2 << " tdc3 " << t3 << " tdc4 " << t4 << endl; 
   
    ntuple->Fill(a1,a2,a3,a4,t1,t2,t3,t4);
   
    nlines++;
  }
  
  cout << " found " << nlines << " points " << endl;
  in.close();
  f->Write();
  
}
