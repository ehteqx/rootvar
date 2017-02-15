/*Write a script that asks the user to type the width and the
 length of a rectangle and then outputs to the screen the
 area and the perimeter of that rectangle.*/

{
  Double_t width = 0.;
  Double_t length = 0.;
  
  cout<<"Type the width :  "; 
  cin>>width; 
  cout<<"Type the length : "; 
  cin>>length;
  
  cout<<"Area:      "<<width*length<<endl;
  cout<<"Perimeter: "<<2*(width+length)<<endl;
  
}
