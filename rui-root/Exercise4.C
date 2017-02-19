/*Write a named script that asks the user to type 10 integers
and writes the smallest value.*/

#include "Riostream.h"
using namespace std;

void Exercise4() {

  Int_t a = 0;
  Int_t b = 0;

  //for LOOP

  for (Int_t i = 0 ; i < 10 ; i++) {

	cout << " i " << i << " a : " ;
	cin >> a ;
	if ( i == 0 ) b = a;
	if ( a < b ) b = a;

  }


  // OR : While LOOP

  // Int_t i = 0;
  // while ( i < 10 ) {

  //   cout << " i " << i << " a : " ;
  //   cin >> a ;
  //   if ( i == 0 ) b = a;
  //   if ( a < b ) b = a;

  //   i++;
  // }



  cout << " b " << b << endl;

  return;

}

