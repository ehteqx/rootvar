Bool_t GetAnswer() {
  char * input;
  Bool_t done = kFALSE;
  TTimer  *timer = new TTimer("gSystem->ProcessEvents();", 50, kFALSE);
  do {
    timer->TurnOn();
    timer->Reset();
    // Now let's read the input, we can use here any
    // stdio or iostream reading methods. like std::cin >> myinputl;
    input = Getline("Type any keys to continue: ");
    timer->TurnOff();
    // Now usefull stuff with the input!
    // ....
    // here were are always done as soon as we get some input!
    if (input) done = kTRUE;
  } while (!done);
  return kFALSE;
}



void grapherrors(){
   //
  gStyle->SetOptStat(10);
  gStyle->SetOptFit(111);
  gStyle->SetFrameBorderMode(0);
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameFillColor(10);
  gStyle->SetPadColor(10);
  gStyle->SetCanvasColor(10);
  gStyle->SetTitleColor(10);
  gStyle->SetStatColor(10);
  gStyle->SetFillColor(10);
  gROOT->Reset();
  TCanvas * c1 = new TCanvas("c1","A Simple Graph with error bars",200,10,700,500);
   //
  c1->SetFillColor(42);
  c1->SetGrid();
  c1->GetFrame()->SetFillColor(21);
  c1->GetFrame()->SetBorderSize(12);

  const Int_t n = 4;
  Float_t x[n]  = {-0.22, 0.05, 0.25, 0.35};
  Float_t y[n]  = {1.,2.9,5.6,7.4};
  Float_t ex[n] = {.5,.1,.07,.07};
  Float_t ey[n] = {.8,.7,.6,.5};
  
  TGraph * gr1 = new TGraph(n,x,y);
  gr1->SetTitle("TGraph");
  gr1->SetMarkerColor(4);
  gr1->SetMarkerStyle(21);
  gr1->Draw("ALP");

  c1->Modified();
  c1->Update();

  GetAnswer();
  
  TGraph * gr2 = new TGraphErrors(n,x,y,ex,ey);
  gr2->SetTitle("TGraphErrors Example");
  gr2->SetMarkerColor(4);
  gr2->SetMarkerStyle(21);
  gr2->Draw("ALP");
  
  c1->Modified();
  c1->Update();
  GetAnswer();
  return;
}
