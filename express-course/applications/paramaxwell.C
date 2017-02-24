// ROOT 6 Macro
// This macro implements the Maxwell function as a TF1 object with user-defined parameters

// Imports
#include "TROOT.h"
#include "TMath.h"
#include "TCanvas.h"
#include "Riostream.h"
#include "TF1.h"

// User Function definition
Double_t maxfunc(Double_t *x, Double_t *param) {

    Double_t maxfc = 0.0;     // The output. If forbidden values are requested (see below), the probability is always 0.0

    // Parameters check
    if (x[0] >= param[1] && param[0] >= 0.0 && param[2] >= 0.0) {
        maxfc = param[0]*((x[0]-param[1])/param[2])*TMath::Exp(-((x[0]-param[1])/param[2]));
    }

    return maxfc;
}

// TF1 object definition
void paramaxwell() {
    TF1 *userfunc = new TF1("userfunc", maxfunc, -0.5, 4.5, 3);   // List value --> Number of parameters
    userfunc->SetParNames("Prefactor", "Mean", "Normalization");
    userfunc->SetParameters(10, 0., 0.4);
    userfunc->Draw();
}
