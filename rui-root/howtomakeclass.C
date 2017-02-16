{
  TFile * pfile = new TFile("run_2013.root");
  TNtuple * ntp = (TNtuple *) pfile->Get("ntuple");
  ntp->MakeClass("ReadNtuple");
  // <TTreePlayer::MakeClass>: Files: ReadNtuple.h and ReadNtuple.C generated from TTree: ntuple
  }
