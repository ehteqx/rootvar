/*Introduce int variables x and y and int* pointer variables p and q. Set x to
2, y to 8, p to the address of x, and q to the address of y.

Then print the following information:
(1) The address of x and the value of x.
(2) The value of p and the value of *p.
(3) The address of y and the value of y.
(4) The value of q and the value of *q.
(5) The address of p (not its contents!).
(6) The address of q (not its contents!)*/

{
  Int_t x;
  Int_t y;
  Int_t * p;
  Int_t * q;

  x = 2 ;
  y = 8 ;

  p = &x;
  q = &y;

  cout << " 1 " << &x << " " << x << endl;
  cout << " 2 " << p << " " << *p << endl;
  cout << " 3 " << &y << " " << y << endl;
  cout << " 4 " << q << " " << *q << endl;
  cout << " 5 " << &p << endl;
  cout << " 6 " << &q << endl;

}
