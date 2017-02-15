#include "Riostream.h"
#include "TStyle.h"
#include "TH1F.h"
#include "TF1.h"
#include "TCanvas.h"

void Fit(){

  // Simple Example to extract Fit informations

  gStyle->SetOptFit(111111);  // Abilita la visualizzazione dei risultati del fit sulla canvas

  // Funzione con cui riempio un istogramma
  
  TF1 *funzFill = new TF1("funzFill","gaus",-10,10);
  funzFill->SetParameter(0,10);
  funzFill->SetParameter(1,0);
  funzFill->SetParameter(2,2);

  TH1F  *h =new TH1F("h","histogram",1000,-10,10);
  h->FillRandom("funzFill",50000);
  
  TCanvas *c = new TCanvas("c","c");
  c->cd(1);
  h->Draw();
  
  // Fit

  h->Fit("gaus");
  
  //Recupero la funzione di Fit

  TF1 *fFit = (TF1*)h->GetFunction("gaus");
  
  //Informazioni del fit

  cout<<"Par 0: "<<fFit->GetParameter(0)<<endl; 
  cout<<"Par 1: "<<fFit->GetParameter(1)<<endl; // Dovrebbe essere 0 
  cout<<"Par 2: "<<fFit->GetParameter(2)<<endl; // Dovrebbe essere 2 
  
  cout<<"Chi Quadro: "<<fFit->GetChisquare()<<endl;
  cout<<"NDF:        "<<fFit->GetNDF()<<endl;
  cout<<"Chi Quadro Ridotto : "<<fFit->GetChisquare()/fFit->GetNDF()<<endl;
  
}

