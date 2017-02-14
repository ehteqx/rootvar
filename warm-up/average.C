// ROOT 6 using C++11
// This macro calculates the average of a given number of numbers

void average() {

	cout << "Insert the number of entries... " << endl;
	long long nmbr;
	cin >> nmbr;

	double long cycler=0.0;
	double long sum=0.0;
	for (int j=1; j<nmbr+1; j++) {
		cout << "Please, insert the " << j << "-th entry... " << endl;
		cycler = 0.0;
		cin >> cycler;
		sum = sum + cycler;
	}

	sum = sum/nmbr;
	cout << "The mean average of the " << nmbr << " numbers you have enetered is " << sum << endl;
}
