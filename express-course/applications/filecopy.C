// ROOT 6 Macro
// This macro parses and copies two objects (types: TF1 and TH1F) of given name from a ROOT binary file (*.root) prepared before

// Import
#include "TROOT.h"
#include "TFile.h"
#include "TF1.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TPad.h"
#include "TFrame.h"

// Macro
void filecopy() {

    gROOT->Reset();     // A good coding practice

    // Copy data
    TFile *myfile = new TFile("fillrandom.root");       // Copy-point the file

    TF1 *myfunc = new TF1;                      // Define...
    myfunc = (TF1 *) myfile->Get("sqroot");     // ... & cast!

    TH1F *myhist = new TH1F;
    myhist = (TH1F *) myfile->Get("h1f");

    // Plot

    // --> From fillrandom.C initialize canvas & pads
    TCanvas * c1 = new TCanvas("c1","The FillRandom example, copied",700,1000);
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

    // --> Setup lines & plot function

    myfunc->SetLineColor(4);
    myfunc->SetLineWidth(6);

    pad1->cd();       // Direct call: assume control of pad1. cd() with no arguments
    myfunc->Draw();
    c1->Update();

    // --> Setup histogram and plot
    pad2->cd();
    myhist->SetFillColor(45);
    myhist->Draw();

    c1->Update();
}
