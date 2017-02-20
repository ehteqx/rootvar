// ROOT 6 macro
// This macro acts as a simple showcase for the use of 1-D functions (Class: TF1)

#include "iostream"
#include "TMath.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TROOT.h"  // gROOT abstractions

void showfunc() {

    using namespace std;    // Namespace declaration

    gROOT->Reset();         // A good programming practice

    TCanvas *canv = new TCanvas("canv", "Example of 1D function/formula", 800, 500);    // Created canvas for the graph

    TF1 *sinc = new TF1("sinc", "sin(x)/x", 0.0, 10.0);     // Uses built-in TMath:: functions (=> Cardinal Sinus)

    // Some canvas cosmetics
    canv->cd(1);    // Maybe obvious
    canv->SetGridx();
    canv->SetGridy();

    // Back to the function
    sinc->Draw();
    canv->Update();

    // Now, some text output
    cout << "Point evaluation (0.8): " << sinc->Eval(0.8) << endl;
    cout << "Point eval of derivative (1.5): " << sinc->Derivative(1.5) << endl;
    cout << "Integral between 1.5 and 5.69: " << sinc->Integral(1.5, 5.69) << endl;
}
