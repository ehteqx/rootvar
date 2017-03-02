// ROOT 6 Macro - using C++11

// Defines & Includes
#define T1_cxx
#include "T1.h"
#include <TROOT.h>
#include <TH1.h>
#include <TH2.h>
#include <TF1.h>
#include <TPad.h>
#include <Riostream.h>
#include <TStyle.h>
#include <TCanvas.h>

// Loop Method
void T1::Loop() {
    using namespace std;

    gROOT->Clear();             // A good coding practice

   if (fChain == 0) return;     // Halts execution if file empty

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;

   // Preliminary "Loop()" definitions
   TCanvas *canv = new TCanvas("canv", "histogram canvas", 10,10,500,500);

   TH2F *histog = new TH2F("histog", "phi[0] vs eta[0] histogram", 20, -4.0, 4.0, 20, -3.0, 3.0);

   for (Long64_t jentry=0; jentry<nentries;jentry++) {      // Loops over single file entries
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      // Loop code
      histog->Fill(phi[0],phi[1]);
   }

   // PostProc code
   canv->cd();
   histog->Draw();
}
