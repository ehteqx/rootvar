// ROOT 6 using C++11
// Shared multi-library

// Include block
#include "Riostream.h"
#include <TMath.h>

// Functions block

// Func 1 - Cube
void cube() {

	cout << "Please, insert a number... " << endl;
	double num;
	cin >> num;

	cout << "Its cube is... " << TMath::Power(num,3) << endl;
}

// Func 2 - Average
void average() {

	cout << "Insert the number of entries... " << endl;
	long long nmbr;
	cin >> nmbr;

	double long cycler=0.0;
	double long sum=0.0;
	for (int j=1; j<nmbr+1; j++) {
		cout << "Please, insert the " << j << "-th entry... " << endl;
		cycler = 0.0;
		cin >> cycler;
		sum = sum + cycler;
	}

	sum = sum/nmbr;
	cout << "The mean average of the " << nmbr << " numbers you have enetered is " << sum << endl;
}

// Will it compile as a shared library?
