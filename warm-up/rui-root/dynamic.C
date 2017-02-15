#include "Riostream.h"

int dynamic(){

  int i,n;
  int * p;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p = new int[i];
  for (n=0; n<i; n++){
    cout << "Enter number: ";
    cin >> p[n];
  }
  cout << "You have entered: ";
  for (n=0; n<i; n++) cout << p[n] << ", ";

  delete[] p;

  return 0;

}
