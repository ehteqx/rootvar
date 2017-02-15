// ROOT 6 using C++11
// This macro calculates the minimum of a given number of numbers, in an on-the-fly fashion

void minOTF() {

	cout << "How many numbers do you want to insert? " << endl;
	long long upbound;
	cin >> upbound;

	long long i = 1;
	cout << "Now, insert the entry nr. " << i << endl;
	long double min;
	cin >> min;

	long double usrbuff;
	for(i=2;i<upbound+1;i++) {
		cout << "Now, insert the entry nr. " << i << endl;
		cin >> usrbuff;

		if (usrbuff < min) {
			min = usrbuff;
		}
	}

	cout << "The minimum is " << min << endl;

}
