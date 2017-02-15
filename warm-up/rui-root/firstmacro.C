#include "Riostream.h" 

void firstmacro() {  

  Int_t sum =0;

  for (Int_t i = 0 ; i < 10 ; i++) {    

    cout << " i " << i << endl;  
    sum+=i;

  }
  cout<<endl;

  cout<<"The sum is: "<<sum<<endl;
  return;

}

