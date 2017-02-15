{
  gROOT->Reset();

  TCanvas * c1 = new TCanvas("c1","The HSUM example",200,10,600,400);
  c1->Divide(1,2);
  c1->cd(1);

  // Create some histograms.
  //  TH1F * norm  = new TH1F("norm","This is the total distribution",100,1382.-3.*36.,1382.+3.*36.);
  TH1F * main   = new TH1F("main","Main contributor",100,1382.-3.*36.,1382.+3.*36.);

  // Fill histograms randomly
  gRandom->SetSeed();
  Float_t xs1;
  for ( Int_t i=0; i<10000; i++) {
    xs1   = gRandom->BreitWigner(1382.0, 36.0);
    main->Fill(xs1);
  }
  //  main->Draw(); // to redraw axis hidden by the fill area
  main->DrawCopy(); // to redraw axis hidden by the fill area
  c1->Modified();
  c1->Update();
  //}
  c1->cd(2);
  TH1F * norm = (TH1F *) main->Clone("norm");
  norm->Scale(1./norm->Integral());
  norm->DrawCopy();
}

