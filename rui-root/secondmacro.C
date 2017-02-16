#include "Riostream.h" 

void secondmacro() {  

  Int_t a = 0;
  Int_t b = 0;
  
  // for (Int_t i = 0 ; i < 10 ; i++) {    

  Int_t i = 0;
  while ( i < 10 ) {
    
    cout << " i " << i << " a : " ;
    cin >> a ;
    if ( i == 0 ) b = a;
    if ( a < b ) b = a;

    i++;
  }

  cout << " b " << b << endl;

  return;

}

