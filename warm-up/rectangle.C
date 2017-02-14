// ROOT 6 using C++11
// This macro calculates the area of a rectangle interactively
void rectangle() { // The main function must be called as the file to run in CLING

  cout << "This macro calculates the area of a rectangle interactively..." << endl;

  double long side_1;
  cout << "Side 1: " << endl;
  cin >> side_1;

  double long side_2;
  cout << "Side 2: " << endl;
  cin >> side_2;

  double long area = side_1 * side_2;
  cout << "The area of the rectangle is " << area << endl;

}
