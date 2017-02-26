// ROOT 6 Macro for Data Analysis
// This macro reads structured ASCII data from a file in ./ and outputs them as a TNtuple in a .root binary file
// This file is a rework of original codebase by Ramona Lea, Ph.D. and Prof. Rinaldo Rui.
// Copyright (C) 2015 - R. Lea & R. Rui


// Includes
#include "Riostream.h"
#include "TROOT.h"
#include "TFile.h"
#include "TH1F.h"
#include "TNtuple.h"


// Main class
void FillNtuple() {

  using namespace std;          // To directly call Riostream.h abstractions from stdlib.h

  gROOT->Reset();               // A good coding practice

  ifstream in;                  // Stream set as "in"

  in.open("run_1.dat");         // The file is assumed to be in ./ || Change name/location if needed

  Float_t a1,a2,a3,a4, t1,t2,t3,t4;     // The file is assumed to contain 8 cols of floats, in an unknown number of rows
  Int_t nlines = 0;                     // Number of rows initially = 0


  TFile *f = new TFile("run_1.root","RECREATE");    // A new TFile object is created, overwritten if it exists
  TNtuple *ntuple = new TNtuple("ntuple","data from ascii file","adc1:adc2:adc3:adc4:tdc1:tdc2:tdc3:tdc4");     // A new TNtuple object is created, with rank 8
                                                                // Above, this is the structure of the TNtuple

  while (1) {   // Endless loop

    in >> a1 >> a2 >> a3 >> a4 >> t1 >> t2 >> t3 >> t4 ;    // For every line, assign col-values to variables given

    if (!in.good()) break;                                  // If the file ends, then stop

    if (nlines < 5) cout << " adc1 " << a1 << " adc2 " << a2 << " adc3 " << a3 << " adc4 " << a4 << " tdc1" << t1 << " tdc2 " << t2 << " tdc3 " << t3 << " tdc4 " << t4 << endl;
    // Above, print first 5 lines interactively, to check eveything works fine

    ntuple->Fill(a1,a2,a3,a4,t1,t2,t3,t4);      // Allocate the NTuple, one line at a time

    nlines++;                                   // Increment counter (we're in an endless loop, it's needed!)
  }

  cout << " found " << nlines << " points " << endl;    // Some output for the user
  in.close();       // Close input file
  f->Write();       // Write binary file
  f->Close();       // Close binary file
}
