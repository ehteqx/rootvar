/*Write a program that asks the user to type 10 integers of
an array. The program must compute and write the
number of integers greater or equal to 10.*/

#include "Riostream.h" 

void Exercise5() {  

  Int_t a = 0;
  Int_t b = 0;
  

  //While LOOP 

  Int_t v1[10] = {0};
  Int_t i = 0;
  while ( i < 10 ) {
    cout << " i " << i << " a : " ;
    cin >> v1[i] ;
    a = v1[i];
    if ( i == 0 ) b = v1[i];
    if ( a < b ) b = v1[i];
    i++;
  }

  // OR for loop
  // for (Int_t i = 0 ; i < 10 ; i++) {    
  //   cout << " i " << i << " a : " ;
  //   cin >> v1[i] ;
  //   a = v1[1];
  //   if ( i == 0 ) b = v1[i];
  //   if ( a < b ) b = v1[i];
  // }

  for (Int_t j = 0 ; j < 10 ; j++) {
    if (v1[j]>10) cout <<"Element: "<< j << " value: " << v1[j] << endl;

  }    

  cout << " b " << b << endl;

  return;

}

