/* Write a script that asks the user to type 5 integers and
writes the average of the 5 integers. This program can use
only 2 variables. */

{
  Double_t a = 0.; 
  Double_t b = 0.;
  cout << "1 :"; cin >> a; b+=a;
  cout << "2 :"; cin >> a; b+=a;
  cout << "3 :"; cin >> a; b+=a;
  cout << "4 :"; cin >> a; b+=a;
  cout << "5 :"; cin >> a; b+=a;

  cout <<"average " << b/5. << endl;
  
}
