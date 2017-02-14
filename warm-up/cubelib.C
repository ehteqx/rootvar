// ROOT 6 using C++11
// This macro asks for a number and calculates its cube
// This macro supports ACLiC compile as shared library

// Import block
#include "Riostream.h"
#include <TMath.h>
using namespace std;

// Function
void cube() {

	cout << "Please, insert a number... " << endl;
	double num;
	cin >> num;

	cout << "Its cube is... " << TMath::Power(num,3) << endl;
}
