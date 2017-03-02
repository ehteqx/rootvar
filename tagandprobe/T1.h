//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Mar  2 10:54:04 2017 by ROOT version 6.09/01
// from TTree T1/vecbos analysis tree for Z studies
// found on file: MC_4Nicola.root
//////////////////////////////////////////////////////////

#ifndef T1_h
#define T1_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class T1 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           lumi;
   Int_t           event;
   Int_t           nJetsHi;
   Int_t           nPFJetsHi;
   Int_t           nTrackJetsHi;
   Int_t           nGenJetsHi;
   Int_t           nJetsLo;
   Int_t           nPFJetsLo;
   Int_t           nTrackJetsLo;
   Int_t           nGenJetsLo;
   Int_t           nBTagJets[5];
   Float_t         mee;
   Float_t         mt;
   Float_t         tcmt;
   Float_t         pfmt;
   Float_t         met;
   Float_t         tcmet;
   Float_t         pfmet;
   Float_t         ptW;
   Float_t         ptWRecoil;
   Float_t         templMetUncorr;
   Float_t         templMetCorr;
   Float_t         templTrMassUncorr;
   Float_t         templTrMassCorr;
   Int_t           caloJetSelectedHi;
   Int_t           PFJetSelectedHi;
   Int_t           trackJetSelectedHi;
   Int_t           caloJetSelectedLo;
   Int_t           PFJetSelectedLo;
   Int_t           trackJetSelectedLo;
   Float_t         leadingCaloJetPt;
   Float_t         leadingPFJetPt;
   Float_t         emFracCaloJet;
   Float_t         emFracPFJet;
   Float_t         diJetMass[2];
   Float_t         ptGen1;
   Float_t         ptGen2;
   Float_t         etaGen1;
   Float_t         etaGen2;
   Float_t         meeGen;
   Int_t           promptDecay;
   Float_t         combinedSecondaryVertexBJetTags;
   Float_t         combinedSecondaryVertexMVABJetTags;
   Float_t         jetBProbabilityBJetTags;
   Float_t         jetProbabilityBJetTags;
   Float_t         simpleSecondaryVertexBJetTags;
   Float_t         softMuonBJetTags;
   Float_t         trackCountingHighPurBJetTags;
   Float_t         trackCountingHighEffBJetTags;
   Int_t           foundMcB;
   Int_t           foundMcBmum;
   Int_t           nB;
   Int_t           recoflag[2];
   Float_t         pt[2];
   Float_t         eta[2];
   Float_t         phi[2];
   Int_t           classification[2];
   Int_t           nbrem[2];
   Float_t         deta[2];
   Float_t         dphi[2];
   Float_t         hoe[2];
   Float_t         see[2];
   Float_t         spp[2];
   Float_t         eop[2];
   Float_t         fbrem[2];
   Float_t         trackerIso[2];
   Float_t         hcalIso[2];
   Float_t         ecalJIso[2];
   Float_t         ecalGTIso[2];
   Float_t         combinedIso[2];
   Int_t           charge[2];
   Int_t           missHits[2];
   Float_t         dist[2];
   Float_t         dcot[2];
   Float_t         lh[2];
   Float_t         e9esc[2];
   Float_t         e25esc[2];
   Bool_t          probe_eleId_WP80;
   Bool_t          probe_isol_WP80;
   Bool_t          probe_conv_WP80;
   Bool_t          probe_eleId_WP95;
   Bool_t          probe_isol_WP95;
   Bool_t          probe_conv_WP95;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_event;   //!
   TBranch        *b_nJetsHi;   //!
   TBranch        *b_nPFJetsHi;   //!
   TBranch        *b_nTrackJetsHi;   //!
   TBranch        *b_nGenJetsHi;   //!
   TBranch        *b_nJetsLo;   //!
   TBranch        *b_nPFJetsLo;   //!
   TBranch        *b_nTrackJetsLo;   //!
   TBranch        *b_nGenJetsLo;   //!
   TBranch        *b_nBTagJets;   //!
   TBranch        *b_mee;   //!
   TBranch        *b_mt;   //!
   TBranch        *b_tcmt;   //!
   TBranch        *b_pfmt;   //!
   TBranch        *b_met;   //!
   TBranch        *b_tcmet;   //!
   TBranch        *b_pfmet;   //!
   TBranch        *b_ptW;   //!
   TBranch        *b_ptWRecoil;   //!
   TBranch        *b_templMetUncorr;   //!
   TBranch        *b_templMetCorr;   //!
   TBranch        *b_templTrMassUncorr;   //!
   TBranch        *b_templTrMassCorr;   //!
   TBranch        *b_caloJetSelectedHi;   //!
   TBranch        *b_PFJetSelectedHi;   //!
   TBranch        *b_trackJetSelectedHi;   //!
   TBranch        *b_caloJetSelectedLo;   //!
   TBranch        *b_PFJetSelectedLo;   //!
   TBranch        *b_trackJetSelectedLo;   //!
   TBranch        *b_leadingCaloJetPt;   //!
   TBranch        *b_leadingPFJetPt;   //!
   TBranch        *b_emFracCaloJet;   //!
   TBranch        *b_emFracPFJet;   //!
   TBranch        *b_diJetMass;   //!
   TBranch        *b_ptGen1;   //!
   TBranch        *b_ptGen2;   //!
   TBranch        *b_etaGen1;   //!
   TBranch        *b_etaGen2;   //!
   TBranch        *b_meeGen;   //!
   TBranch        *b_promptDecay;   //!
   TBranch        *b_combinedSecondaryVertexBJetTags;   //!
   TBranch        *b_combinedSecondaryVertexMVABJetTags;   //!
   TBranch        *b_jetBProbabilityBJetTags;   //!
   TBranch        *b_jetProbabilityBJetTags;   //!
   TBranch        *b_simpleSecondaryVertexBJetTags;   //!
   TBranch        *b_softMuonBJetTags;   //!
   TBranch        *b_trackCountingHighPurBJetTags;   //!
   TBranch        *b_trackCountingHighEffBJetTags;   //!
   TBranch        *b_foundMcB;   //!
   TBranch        *b_foundMcBmum;   //!
   TBranch        *b_nB;   //!
   TBranch        *b_recoflag;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_classification;   //!
   TBranch        *b_nbrem;   //!
   TBranch        *b_deta;   //!
   TBranch        *b_dphi;   //!
   TBranch        *b_hoe;   //!
   TBranch        *b_see;   //!
   TBranch        *b_spp;   //!
   TBranch        *b_eop;   //!
   TBranch        *b_fbrem;   //!
   TBranch        *b_trackerIso;   //!
   TBranch        *b_hcalIso;   //!
   TBranch        *b_ecalJIso;   //!
   TBranch        *b_ecalGTIso;   //!
   TBranch        *b_combinedIso;   //!
   TBranch        *b_charge;   //!
   TBranch        *b_missHits;   //!
   TBranch        *b_dist;   //!
   TBranch        *b_dcot;   //!
   TBranch        *b_lh;   //!
   TBranch        *b_e9esc;   //!
   TBranch        *b_e25esc;   //!
   TBranch        *b_probe_eleId_WP80;   //!
   TBranch        *b_probe_isol_WP80;   //!
   TBranch        *b_probe_conv_WP80;   //!
   TBranch        *b_probe_eleId_WP95;   //!
   TBranch        *b_probe_isol_WP95;   //!
   TBranch        *b_probe_conv_WP95;   //!

   T1(TTree *tree=0);
   virtual ~T1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef T1_cxx
T1::T1(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("MC_4Nicola.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("MC_4Nicola.root");
      }
      f->GetObject("T1",tree);

   }
   Init(tree);
}

T1::~T1()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t T1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t T1::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void T1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("nJetsHi", &nJetsHi, &b_nJetsHi);
   fChain->SetBranchAddress("nPFJetsHi", &nPFJetsHi, &b_nPFJetsHi);
   fChain->SetBranchAddress("nTrackJetsHi", &nTrackJetsHi, &b_nTrackJetsHi);
   fChain->SetBranchAddress("nGenJetsHi", &nGenJetsHi, &b_nGenJetsHi);
   fChain->SetBranchAddress("nJetsLo", &nJetsLo, &b_nJetsLo);
   fChain->SetBranchAddress("nPFJetsLo", &nPFJetsLo, &b_nPFJetsLo);
   fChain->SetBranchAddress("nTrackJetsLo", &nTrackJetsLo, &b_nTrackJetsLo);
   fChain->SetBranchAddress("nGenJetsLo", &nGenJetsLo, &b_nGenJetsLo);
   fChain->SetBranchAddress("nBTagJets", nBTagJets, &b_nBTagJets);
   fChain->SetBranchAddress("mee", &mee, &b_mee);
   fChain->SetBranchAddress("mt", &mt, &b_mt);
   fChain->SetBranchAddress("tcmt", &tcmt, &b_tcmt);
   fChain->SetBranchAddress("pfmt", &pfmt, &b_pfmt);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("tcmet", &tcmet, &b_tcmet);
   fChain->SetBranchAddress("pfmet", &pfmet, &b_pfmet);
   fChain->SetBranchAddress("ptW", &ptW, &b_ptW);
   fChain->SetBranchAddress("ptWRecoil", &ptWRecoil, &b_ptWRecoil);
   fChain->SetBranchAddress("templMetUncorr", &templMetUncorr, &b_templMetUncorr);
   fChain->SetBranchAddress("templMetCorr", &templMetCorr, &b_templMetCorr);
   fChain->SetBranchAddress("templTrMassUncorr", &templTrMassUncorr, &b_templTrMassUncorr);
   fChain->SetBranchAddress("templTrMassCorr", &templTrMassCorr, &b_templTrMassCorr);
   fChain->SetBranchAddress("caloJetSelectedHi", &caloJetSelectedHi, &b_caloJetSelectedHi);
   fChain->SetBranchAddress("PFJetSelectedHi", &PFJetSelectedHi, &b_PFJetSelectedHi);
   fChain->SetBranchAddress("trackJetSelectedHi", &trackJetSelectedHi, &b_trackJetSelectedHi);
   fChain->SetBranchAddress("caloJetSelectedLo", &caloJetSelectedLo, &b_caloJetSelectedLo);
   fChain->SetBranchAddress("PFJetSelectedLo", &PFJetSelectedLo, &b_PFJetSelectedLo);
   fChain->SetBranchAddress("trackJetSelectedLo", &trackJetSelectedLo, &b_trackJetSelectedLo);
   fChain->SetBranchAddress("leadingCaloJetPt", &leadingCaloJetPt, &b_leadingCaloJetPt);
   fChain->SetBranchAddress("leadingPFJetPt", &leadingPFJetPt, &b_leadingPFJetPt);
   fChain->SetBranchAddress("emFracCaloJet", &emFracCaloJet, &b_emFracCaloJet);
   fChain->SetBranchAddress("emFracPFJet", &emFracPFJet, &b_emFracPFJet);
   fChain->SetBranchAddress("diJetMass", diJetMass, &b_diJetMass);
   fChain->SetBranchAddress("ptGen1", &ptGen1, &b_ptGen1);
   fChain->SetBranchAddress("ptGen2", &ptGen2, &b_ptGen2);
   fChain->SetBranchAddress("etaGen1", &etaGen1, &b_etaGen1);
   fChain->SetBranchAddress("etaGen2", &etaGen2, &b_etaGen2);
   fChain->SetBranchAddress("meeGen", &meeGen, &b_meeGen);
   fChain->SetBranchAddress("promptDecay", &promptDecay, &b_promptDecay);
   fChain->SetBranchAddress("combinedSecondaryVertexBJetTags", &combinedSecondaryVertexBJetTags, &b_combinedSecondaryVertexBJetTags);
   fChain->SetBranchAddress("combinedSecondaryVertexMVABJetTags", &combinedSecondaryVertexMVABJetTags, &b_combinedSecondaryVertexMVABJetTags);
   fChain->SetBranchAddress("jetBProbabilityBJetTags", &jetBProbabilityBJetTags, &b_jetBProbabilityBJetTags);
   fChain->SetBranchAddress("jetProbabilityBJetTags", &jetProbabilityBJetTags, &b_jetProbabilityBJetTags);
   fChain->SetBranchAddress("simpleSecondaryVertexBJetTags", &simpleSecondaryVertexBJetTags, &b_simpleSecondaryVertexBJetTags);
   fChain->SetBranchAddress("softMuonBJetTags", &softMuonBJetTags, &b_softMuonBJetTags);
   fChain->SetBranchAddress("trackCountingHighPurBJetTags", &trackCountingHighPurBJetTags, &b_trackCountingHighPurBJetTags);
   fChain->SetBranchAddress("trackCountingHighEffBJetTags", &trackCountingHighEffBJetTags, &b_trackCountingHighEffBJetTags);
   fChain->SetBranchAddress("foundMcB", &foundMcB, &b_foundMcB);
   fChain->SetBranchAddress("foundMcBmum", &foundMcBmum, &b_foundMcBmum);
   fChain->SetBranchAddress("nB", &nB, &b_nB);
   fChain->SetBranchAddress("recoflag", recoflag, &b_recoflag);
   fChain->SetBranchAddress("pt", pt, &b_pt);
   fChain->SetBranchAddress("eta", eta, &b_eta);
   fChain->SetBranchAddress("phi", phi, &b_phi);
   fChain->SetBranchAddress("classification", classification, &b_classification);
   fChain->SetBranchAddress("nbrem", nbrem, &b_nbrem);
   fChain->SetBranchAddress("deta", deta, &b_deta);
   fChain->SetBranchAddress("dphi", dphi, &b_dphi);
   fChain->SetBranchAddress("hoe", hoe, &b_hoe);
   fChain->SetBranchAddress("see", see, &b_see);
   fChain->SetBranchAddress("spp", spp, &b_spp);
   fChain->SetBranchAddress("eop", eop, &b_eop);
   fChain->SetBranchAddress("fbrem", fbrem, &b_fbrem);
   fChain->SetBranchAddress("trackerIso", trackerIso, &b_trackerIso);
   fChain->SetBranchAddress("hcalIso", hcalIso, &b_hcalIso);
   fChain->SetBranchAddress("ecalJIso", ecalJIso, &b_ecalJIso);
   fChain->SetBranchAddress("ecalGTIso", ecalGTIso, &b_ecalGTIso);
   fChain->SetBranchAddress("combinedIso", combinedIso, &b_combinedIso);
   fChain->SetBranchAddress("charge", charge, &b_charge);
   fChain->SetBranchAddress("missHits", missHits, &b_missHits);
   fChain->SetBranchAddress("dist", dist, &b_dist);
   fChain->SetBranchAddress("dcot", dcot, &b_dcot);
   fChain->SetBranchAddress("lh", lh, &b_lh);
   fChain->SetBranchAddress("e9esc", e9esc, &b_e9esc);
   fChain->SetBranchAddress("e25esc", e25esc, &b_e25esc);
   fChain->SetBranchAddress("probe_eleId_WP80", &probe_eleId_WP80, &b_probe_eleId_WP80);
   fChain->SetBranchAddress("probe_isol_WP80", &probe_isol_WP80, &b_probe_isol_WP80);
   fChain->SetBranchAddress("probe_conv_WP80", &probe_conv_WP80, &b_probe_conv_WP80);
   fChain->SetBranchAddress("probe_eleId_WP95", &probe_eleId_WP95, &b_probe_eleId_WP95);
   fChain->SetBranchAddress("probe_isol_WP95", &probe_isol_WP95, &b_probe_isol_WP95);
   fChain->SetBranchAddress("probe_conv_WP95", &probe_conv_WP95, &b_probe_conv_WP95);
   Notify();
}

Bool_t T1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void T1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t T1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef T1_cxx
