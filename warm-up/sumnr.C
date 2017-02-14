// ROOT 6 using C++11
// This script computes the sum of the first (given) natural numbers

void sumnr() {

	cout << "Insert the natural upper bound... " << endl;
	long long ubound;
	cin >> ubound;

	long long sum = 0;
	for (long long i=0; i <ubound+1; i++) sum +=i; // inline loop

	cout << "The sum of the first " << ubound << " natural numbers is " << sum << endl;
}
