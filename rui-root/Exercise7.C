/*Define an int* pointer variable a.
Then:
(1) Use new to make a point to a dynamic array of 5 cells of type int.
(2) Write a loop to fill a with values 3, 7, 11, 15, 19.
(3) Write a loop to print the values in a with one cell per line.
(4) Delete the dynamic memory allocated to a using delete [].*/

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
  if(n=i-1)cout<<endl;

  delete[] p;

  return 0;

}
