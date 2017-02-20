// ROOT 6 macro
// This macro builds, fills and draws an exercise histogram (R. Lea - Ex.01)

// Import section
#include "TROOT.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TRandom.h"

// Classes section
void histogram() {

    gROOT->Reset();     // Reset variables in the global scope: we don't need them if re-executing the macro

    TCanvas *canv = new TCanvas("canv", "Main Canvas", 500, 500);   // Create a 500px x 500 px canvas
    canv->Divide(1,2);  // Vertical division
    canv->cd(1);        // Select pad 1 of 2

    TH1F *hist = new TH1F("hist", "Breit-Wigner distribution", 500, 1382.80-3.0*36.0, 1382.80+3.0*36.0);

    gRandom->SetSeed(); // Initialize RNG with auto-random seed (not safe for crypto)

    float_t datum;      // Datum in a cycle
    for ( Int_t i=0; i<10000; i++) {
      datum   = gRandom->BreitWigner(1382.0, 36.0);     // Built-in function
      hist->Fill(datum);
    }

      hist->SetXTitle("Invariant Mass [GeV/c^{2}]");    // Labelling axes
      hist->SetYTitle("Counts");

      hist->DrawCopy();     // Redraw hidden axis...
      canv->Modified();       // ... and set canvas as modified...
      canv->Update();         // ... and update it

      canv->cd(2);
      TH1F * normhist = (TH1F *) hist->Clone("norm");       // A "vintage" way of cloning object properties
      normhist->Scale(1.0/normhist->Integral());
      normhist->DrawCopy();                                 // And draw it
}
