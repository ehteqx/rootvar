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

Bool_t GetAnswer() {

    using namespace std;

  char  input;
  Bool_t done = kFALSE;
  TTimer  *timer = new TTimer("gSystem->ProcessEvents();", 50, kFALSE);

  //char varin;

  do {

    timer->TurnOn();
    timer->Reset();
    // Now let's read the input, we can use here any
    // stdio or iostream reading methods. like std::cin >> myinputl;
    //    input = Getline("Type any keys to continue: ");
    //    input = GetLine("Type any keys to continue: ");
    cout<<"Type c or C keys to continue: ";
    cin>>input;
    timer->TurnOff();
    // Now usefull stuff with the input!
    // ....
    // here were are always done as soon as we get some input!

    if (input == 'c' || input== 'C' ) done = kTRUE;
    //if (input) done = kTRUE;
  } while (!done);
  return kFALSE;
}


void basicDA() {

    using namespace std;

  //   Example of macro to read data from an ascii file and
  //   create a root file with an histogram and an ntuple
  gROOT->Reset();

  gStyle->SetOptStat(10);
  gStyle->SetOptFit(0111);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameFillColor(10);
  gStyle->SetPadColor(10);
  gStyle->SetCanvasColor(10);
  gStyle->SetTitleColor(1);
  gStyle->SetStatColor(10);
  gStyle->SetFillColor(10);
  gStyle->SetAxisColor(1);
  gStyle->SetLabelColor(1);

  //
  ifstream in;

  //   We assume a file run_1.dat in the current directory
  //   this file has 8 columns of float data

  in.open("run_1.dat");

  Float_t a1,a2,a3,a4, t1,t2,t3,t4;
  Int_t nlines = 0;


  TH1F *h1 = new TH1F("h1","ADC1 distribution",255,-0.5,254.5);
  TH1F *h2 = new TH1F("h2","ADC2 distribution",255,-0.5,254.5);

  TFile *f = new TFile("run_1.root","RECREATE");
  TNtuple *ntuple = new TNtuple("ntuple","data from ascii file","adc1:adc2:adc3:adc4:tdc1:tdc2:tdc3:tdc4");


  while (1) {
    in >> a1 >> a2 >> a3 >> a4 >> t1 >> t2 >> t3 >> t4 ;
    if (!in.good()) break;
    if (nlines < 5) cout << " adc1 " << a1 << " adc2 " << a2 << " adc3 " << a3 << " adc4 " << a4 << " tdc1" << t1 << " tdc2 " << t2 << " tdc3 " << t3 << " tdc4 " << t4 << endl;
    h1->Fill(a1);
    h2->Fill(a2);

    ntuple->Fill(a1,a2,a3,a4,t1,t2,t3,t4);

    nlines++;
  }

  cout << " found " << nlines << " points " << endl;
  in.close();
  f->Write();

  GetAnswer();

  TCanvas * c1 = new TCanvas("c1","The Ntuple canvas",200,10,700,780);
  //
  // Inside this canvas, we create 4 pads
  //
  TPad *  pad1 = new TPad("pad1","This is pad1",0.02,0.52,0.48,0.98,21);
  TPad *  pad2 = new TPad("pad2","This is pad2",0.52,0.52,0.98,0.98,21);
  TPad *  pad3 = new TPad("pad3","This is pad3",0.02,0.02,0.48,0.48,21);
  TPad *  pad4 = new TPad("pad4","This is pad4",0.52,0.02,0.98,0.48,21);
  pad1->Draw();
  pad2->Draw();
  pad3->Draw();
  pad4->Draw();

  c1->Modified();
  c1->Update();

  // Display adc1
  pad1->cd();
  pad1->SetGrid();

  TH1F *hadc1 = new TH1F("hadc1","hadc1",100,0,255);
  ntuple->Draw("adc1>>hadc1","adc1>100");
  hadc1->SetLineColor(kRed);

  TH1F *hadc2 = new TH1F("hadc2","hadc2",100,0,255);
  ntuple->Draw("adc2>>hadc2","adc1>100","same");

  TLegend *leg =  new TLegend(0.61,0.65,0.99,0.86);
  leg->AddEntry(hadc1,"adc c1","l");
  leg->AddEntry(hadc2,"adc c2","l");
  leg->Draw();

  c1->Modified();
  c1->Update();
  GetAnswer();

  // Display a scatter plot of two columns (adc1 vs adc2)
  pad2->cd();


  ntuple->Draw("adc1:adc2>>h1vs2(100,0.,255.,100,0.,255.)","", "lego");
  TH2F *h1vs2 = (TH2F*)gDirectory->Get("h1vs2");

  h1vs2->GetXaxis()->SetTitle("adc1");
  h1vs2->GetYaxis()->SetTitle("adc2");
  h1vs2->GetZaxis()->SetTitle("Counts");

  c1->Modified();
  c1->Update();
  GetAnswer();

  // Display a 3D scatter plot of 3 columns
  pad3->cd();
  ntuple->Draw("tdc2:tdc1:tdc3");
  c1->Modified();
  c1->Update();
  GetAnswer();

  // Display adc1 and superimpose both a different selection and adc2
  pad4->cd();
  ntuple->SetLineColor(kRed);
  ntuple->Draw("adc1");
  ntuple->SetLineColor(8);
  ntuple->Draw("adc1","adc2<100","same");
  ntuple->SetLineColor(kBlue+2);
  ntuple->Draw("adc2","","same");
  c1->Modified();
  c1->Update();
  GetAnswer();

  // Display the profile of two columns
  // The profile histogram produced is saved in the current directory with
  // the name hprofs

  TCanvas *c2 = new TCanvas("c2","Profile");
  ntuple->Draw("tdc2:tdc1");
  c2->Modified();
  c2->Update();
  GetAnswer();

  //  TH1F *hprofs = new TH1F("hprofs","profs",100);
  //  TProfile *hprofs = new TProf;

  ntuple->Draw("tdc2:tdc1>>hprofs","","profs");
  //  ntuple->Draw("pz:px>>hprofs","","goffprofs");
  TProfile *hprofs = (TProfile*)gDirectory->Get("hprofs");

  c2->Modified();
  c2->Update();
  GetAnswer();
  hprofs->SetMarkerColor(5);
  hprofs->SetMarkerSize(0.7);
  hprofs->SetMarkerStyle(21);
  hprofs->Fit("pol1","","same");
  c2->Modified();
  c2->Update();
  GetAnswer();

  // Get pointer to fitted function and modify its attributes
  TF1 *fpol1 = hprofs->GetFunction("pol1");
  fpol1->SetLineWidth(4);
  fpol1->SetLineColor(2);
  c2->Modified();
  c2->Update();
  //  c2->Update();
  // GetAnswer();
  // f->Close();
}
