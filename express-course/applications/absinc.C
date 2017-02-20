// ROOT 6 macro
// This macro acts as a simple showcase for the use of 1-D functions (Class: TF1)
// Exercise version

#include "iostream"
#include "TMath.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TROOT.h"  // gROOT abstractions

void absinc() {

    using namespace std;    // Namespace declaration

    gROOT->Reset();         // A good programming practice

    TCanvas *canv = new TCanvas("canv", "Example of 1D function/formula", 800, 500);    // Created canvas for the graph

    TF1 *asinc = new TF1("sinc", "abs(sin(x)/x)", 0.0, 10.0);     // Uses built-in TMath:: functions (=> Absolute Cardinal Sinus)

    // Some canvas cosmetics
    canv->cd(1);    // Maybe obvious
    canv->SetGridx();
    canv->SetGridy();

    // Back to the function
    asinc->Draw();
    canv->Update();

    // Now, some text output
    cout << "Point evaluation: " << asinc->Eval(1.2456789) << endl;
    cout << "Point eval of derivative: " << asinc->Derivative(1.0) << endl;
    cout << "Integral: " << asinc->Integral(0.0, 3.0) << endl;
}
