// ROOT 6 using C++11
// This macro asks for a number and calculates its cube

#import "TMath.h"
#import "Riostream.h"

using namespace std;

void cube() {

	cout << "Please, insert a number... " << endl;
	double num;
	cin >> num;

	cout << "Its cube is... " << TMath::Power(num,3) << endl;
}
